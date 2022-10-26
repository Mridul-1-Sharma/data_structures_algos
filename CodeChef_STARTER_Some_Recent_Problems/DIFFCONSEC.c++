// Problem Code is " DIFFCONSEC "
// Search this Problem Code on CodeChef in order to see question.

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,count=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    for(i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
        }

        cout<<count<<endl;
	}
	return 0;
}
