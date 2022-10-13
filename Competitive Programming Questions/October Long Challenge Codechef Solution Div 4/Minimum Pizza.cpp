#include <iostream>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
	    long long n,x;
	    cin>>n>>x;
	    if((n*x)%4==0){
	        cout<<(n*x)/4<<endl;
	    }
	    else{
	        cout<<(n*x)/4 + 1<<endl;
	    }
	    //cout<<(n*x)/4<<endl;
	}
	return 0;
}
