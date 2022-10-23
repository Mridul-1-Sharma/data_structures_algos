 #include<bits/stdc++.h>
 using namesapce std;
 class Solution{
   public:
   bool canDo(int color[],int x,bool graph[101][101],int node,int n){
        for(int i=0;i<n;i++){
            if(color[i]==x && graph[i][node]==1 && i!=node)return false;
        }return true;
    }
    bool solve(int color[],int m,int n,int node,bool graph[101][101]){
        if(node==n){
            return true;
        }
        for(int i=1;i<=m;i++){
            if(canDo(color,i,graph,node,n)){
                color[node]=i;
                if(solve(color,m,n,node+1,graph))return true;
                color[node]=0;
            }
        }
        return false;
    }
    bool graphColoring(bool graph[101][101], int m, int n) {
        int color[n];
        for(int i=0;i<n;i++)color[i]=0;
        return solve(color,m,n,0,graph);
    }
 };
 int main(){
   int t;
   cin>>t;
   while(t--){
     int n,m,e;
     cin>>n>>m>>e;
     int i;
     bool graph[101][101];
     for(int i=0;i<n;i++){
       memset(graph[i],0,sizeof(graph[i]));
     }
     for(int i=0;i<e;i++){
       int a,b;
       cin>>a>>b;
       graph[a-1][b-1]=1;
       graph[b-1][a-1]=1;
     }
     Solution solve;
     cout<<solve.graphColoring(graph,n,m)<<endl;
   }
   return 0;
 }
