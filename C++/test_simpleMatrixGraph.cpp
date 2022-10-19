#include<iostream>
#include "simpleMatrixGraph.h"
using namespace std;

int main(int argc, char const *argv[])
{
    int p1, p2, p3; 
    // an undirected graph
    simpleMatrixGraph<string, int> graph(false); 
 
    p1 = graph.insertVertex("A"); 
    p2 = graph.insertVertex("B"); 
    p3 = graph.insertVertex("C"); 
 
    graph.insertEdge(p1, p2, 1); 
    graph.insertEdge(p1, p3, 2); 
 
    graph.print();
    return 0;
}
