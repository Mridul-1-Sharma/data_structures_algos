// Problem Code is " ODDSUMPAIR "
// Search this Problem Code on CodeChef in order to see question.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    if( (a%2==0 && b%2==0 && c%2==0) || (a%2==1 && b%2==1 && c%2==1) )
	    cout<<"NO\n";
	    else
	    cout<<"YES\n";
	}
	return 0;
}