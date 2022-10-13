#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int  t;cin>>t;
	while(t--){
	    long long  a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if((float)a/x==(float)b/y){
	        cout<<"Both"<<endl;
	    }
	    else if((float)a/x>(float)b/y){
	        cout<<"Chefina"<<endl;
	    }
	    else{
	        cout<<"Chef"<<endl;
	    }
	}
	return 0;
}
