// Problem Code is " ARRAYBREAK "
// Search this Problem Code on CodeChef in order to see question.

#include <iostream>
using namespace std;

int main() {
	long long int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long long int a[n],i,count_even=0,count_odd=0,count_1=0;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(i=0;i<n;i++)
	    {
	        if(a[i]%2==0)
	        count_even++;
	        else
	        count_odd++;
	    }
	    
	    if(count_odd==0)
	    cout<<"0\n";
	    else if(count_even==0)
	    cout<<"0\n";
	    else
	    cout<<count_even<<endl;
	}
	return 0;
}
