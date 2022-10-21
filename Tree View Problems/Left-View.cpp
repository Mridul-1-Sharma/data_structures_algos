#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* newNode(int x){
    Node* temp=new Node;
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
Node* buildTree(string s){
    if(s.length()==0 || s[0]=='N'){
        return NULL;
    }
    vector<string> ip;
    istringstream iss(s);
    for(string s;iss>>s;)
        ip.push_back(s);
    Node* root = newNode(stoi(ip[0]));
    queue<Node*> q;
    q.push(root);
    int i=1;
    while(!q.empty() && i<ip.size()){
        Node* currNode=q.front();
        q.pop();
        string data=ip[i];
        if(data!="N"){
            currNode->right=newNode(stoi(data));
            q.push(currNode->right);
        }
        i++;
    }
    return root;
}
class Solution{
    public:
    vector<int> leftView(Node* root){
    queue<Node*> q;
    vector<int> v;
    if(root==NULL)return v;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        v.push_back(q.front()->data);
        while(n--){
            Node* front = q.front();
        q.pop();
        if(front->left!=NULL) q.push(front->left);
        if(front->right!=NULL)q.push(front->right);
        }
    }
    return v;
}
};
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Node* root=buildTree(s);
        Solution solve;
        vector<int> v=solve.leftView(root);
        for(int x:v){
            cout<<x<<endl;
        }
    }
    return 0;
}
