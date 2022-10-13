//Link To The Problem - https://www.codechef.com/OCT221D/problems/SINGLEOP1

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        string s;
        cin>>s;
        long long int y=0;
        for(long long int i=0;i<n;i++){
            if(s[i]=='0'){
            break;
            }
            else{
                y++;
            }
        }
        if(y==n){
            cout<<n<<endl;
        }
        else{
            cout<<y<<endl;
        }
        
    }
	return 0;
}
