// Problem Code is " REMOVEBAD "
// Search this Problem Code on CodeChef in order to see question.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    
	    int a[n],i,b[n],j,flag,g=0;
	    
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    b[i]=0;
	    
	    sort(a,a+n);
	    
	    for(i=0;i<n;)
	    {
	        flag=a[i];
	        j=i;
	        while(flag==a[j])
	        {
	            b[g]++;
	            j++;
	        }
	        g++;
	        i=j;
	    }
	    
	    int maxfrq=0;
	    for(i=0;i<n;i++)
	    {
	        maxfrq=max(maxfrq,b[i]);
	    }
	    
	    cout<<n-maxfrq<<endl;
	}
	return 0;
}
