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
    vector<int> topView(Node* root){
        vector<int> v;
        if(root==NULL)return v;
        queue<pair<Node*,pair<int,int>>> q;
        map<int,map<int,vector<int>>> m;
        q.push({root,{0,0}});
        while(!q.empty()){
            int n=q.size();
            while(n--){
                pair<Node*,pair<int,int>> front=q.front();
                q.pop();
                if(m.find(front.second.first)==m.end()){
                    m[front.second.first][front.second.second].push_back(front.first->data);
                }
                if(front.first->left){
                    q.push({front.first->left,{front.second.first-1,front.second.second+1}});
                }
                if(front.first->right){
                    q.push({front.first->right,{front.second.first+1,front.second.second+1}});
                }
            }
        }
        for(auto i:m){
            for(auto j:i.second){
                for(auto k:j.second){
                    v.push_back(k);
                }
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
        vector<int> v=solve.topView(root);
        for(int x:v){
            cout<<x<<endl;
        }
    }
    return 0;
}
