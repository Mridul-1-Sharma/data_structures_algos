//Link To The Problem - https://www.codechef.com/OCT221D/problems/SINGLEOP2

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
	    long long int c=1;
	    for(long long int i=1;i<n;i++){
	        if(s[i]=='0')c++;
	        else
	        break;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
