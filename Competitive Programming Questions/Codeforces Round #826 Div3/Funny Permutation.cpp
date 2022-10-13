//Link To The Problem : https://codeforces.com/contest/1741/problem/B
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==3){
            cout<<-1<<endl;
            continue;
        }
        if(n%2!=0){
            long long int k=n/2+1;
            for(long long int i=n;i>k;i--)
                cout<<i<<" ";
            for(long long int i=1;i<=k;i++)
                cout<<i<<" ";
            cout<<endl;
        }
        else{
            for(long long int i=n;i>=1;i--)
                cout<<i<<" ";
                cout<<endl;
        }
    }
    
    return 0;
}
