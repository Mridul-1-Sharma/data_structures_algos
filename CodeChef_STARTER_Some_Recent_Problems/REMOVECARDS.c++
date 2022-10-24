// Problem Code is " REMOVECARDS "
// Search this Problem Code on CodeChef in order to see question.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n],i;
	    
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    
	    int b[n];
	    for(i=0;i<n;i++)
	    b[i]=0;
	    
	    sort(a,a+n);
	    
	    int g=0,flag,j;
	    
	    for(i=0;i<n;)
	    {
	        flag=a[i];
	        j=i;
	        while(flag==a[j])
	        {
	            b[g]++;
	            j++;
	        }
	        i=j;
	        g++;
	    }
	    
	    int maxnum=0;
	    
	    for(i=0;i<n;i++)
	    maxnum=max(maxnum,b[i]);
	
	    cout<<n-maxnum<<endl;
	}
	return 0;
}