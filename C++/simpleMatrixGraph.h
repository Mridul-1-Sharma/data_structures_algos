#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

// We can create either a directed graph or an undirected graph according to the flag
// if the flag is false which means undirected; otherwise, it is directed
// insert vertex and return its index which will be used for insertEdge
// for example if we have A and B two vertices in the array, which are index 0, 1
// so insert the edge in edges[0][1] and edges[1][0] if it is an undirected graph
// if it is directed, only need to do edges[0][1]

template<typename T, typename E>
 class simpleMatrixGraph
 {

    public: 
     typedef typename vector<string>::iterator Itr;
 
   private: 
     vector<T> vertices; 
     vector<vector<E>> edges; 
     int n; 
     bool directed;
 
   public: 
     simpleMatrixGraph(bool flag = false) { directed = flag; n = 0; } 
     int insertVertex(const T& v);  // insert a veterx and return its index in the array

     // insert two vertex with a edge
     void insertEdge(const int& source, const int& des, const E& e); 

     // resize the 2D array for the edge
     void expandMatrix(); 
     void print(); 
 };

template<typename T, typename E>
 int simpleMatrixGraph<T, E>::insertVertex(const T& v) 
{ 
    int index;  Itr p;
 
    vertices.push_back(v); 
    p = find(vertices.begin(), vertices.end(), v); 
    n++; 
 
    expandMatrix(); 
    index = p - vertices.begin(); 
  
    return index; 
} 
 
 
template<typename T, typename E>
void simpleMatrixGraph<T, E>::insertEdge(const int& source, const int& des, const E& e) 
{ 
    // insert undiretced vertices
    if (source < n && des < n && directed == false) 
    { 
        edges[source][des] = e; 
        edges[des][source] = e; 
    }
    
    //insert dirtected
    if (source < n && des < n && directed == true) 
        edges[source][des] = e; 
} 

template<typename T, typename E>
void simpleMatrixGraph<T, E>::expandMatrix() 
{ 
    vector<vector<E>> newMatrix; 
 
    newMatrix.resize(n); 

    for (int i = 0; i < n; i++) 
        newMatrix[i].resize(n); 
 
    for (int i = 0; i < n - 1; i++) 
        for (int j = 0; j < n - 1; j++) 
            newMatrix[i][j] = edges[i][j]; 
 
    edges = newMatrix; 
} 


template<typename T, typename E>
void simpleMatrixGraph<T, E>::print() 
{ 
    vector<E> record; 
    int count = 0; 
 
    for (int i = 0; i < n; i++) 
    { 
        for (int j = 0; j < n; j++) 
        { 
            if (edges[i][j] != 0) 
            { 
                record.push_back(j); 
                count++; 
            } 
    
        } 
 
        cout << "Vertex " << vertices[i] << endl; 
        cout << count << " adjacencies: "; 
 
        for (int k = 0; k < record.size(); k++) 
            cout << "(" << vertices[record[k]] << ", 1) "; 
 
        count = 0; 
        record.clear(); 
 
        cout << endl << endl; 
    } 
} 
 
 
 
 
 
