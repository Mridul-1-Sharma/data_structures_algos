//Link To The Problem : https://codeforces.com/contest/1741/problem/C
#include<bits/stdc++.h>
using namespace std;
vector<long long> divisors(long long n){
    vector<long long> v;
    for(long long i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(n/i!=i)v.push_back(n/i);
        }
    }
    return v;
}
void solve(){
    long long int n;
    cin>> n;
    vector<long long> v(n,0);long long sum=0;
    for(long long i=0;i<n;i++){
        long long a;
        cin>>a;
        v[i]=a;
        sum+=v[i];
    }
    vector<long long> summed=divisors(sum);
    long long ans=n;
    if(summed.size()<=2){
        cout<<n<<endl;return;
    }
    for(auto x:summed){
        long long req=sum/x;
        bool b=false;
        long long s=0;long long thick=0;
        long long mx=0;
        for(long long int i=0;i<n;i++){
            s+=v[i];
            thick++;
            if(s==req){
                mx=max(thick,mx);
                s=0;
                thick=0;
            }
            else if(s>req){
                b=true;
                break;
            }
        }
        if(!b){
            ans=min(ans,mx);
        }
    }
    cout<<ans<<endl;
}
int main(){
    long long int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
