#include"bits/stdc++.h"
using namespace std;
int getbit(int n,int pos)
{
    return((n&(1<<pos))!=0);
}
int setbit(int n,int pos)
{
    return((n|(1<<pos)));
}
int clearbit(int n,int pos)
{
    int mask=~(1<<pos);
    return(n & mask);
}
int updatebit(int n, int pos)
{
    int mask=~(1<<pos);
    n=n&mask;
    return((n|(0<<pos)));
}
int countone(int n)
{
    int count=0;
    while(n!=0)
   {
    n=n & n-1;
    count++;
    }
    return count;
}
bool ispowerof2(int n)
{
    return(n && !(n & n-1));
}
int main()
{
    int n,pos;
    cin>>n;
    cin>>pos;
    cout<<getbit(n,pos)<<endl;
    cout<<setbit(n,pos)<<endl;
    cout<<clearbit(n,pos)<<endl;
    cout<<updatebit(n,pos);
    cout<<ispowerof2(32)<<endl;
    cout<<countone(16);
    return 0;
}

void subset(int ar[],int n) 
{
    for(int i=0;i<(1<<n);i++)//(1<<n)equivalent to 2^n -1
    for(int j=0;j<n;j++)//to  getbit 
    {
        if(i & (1<<j))
        {
            cout<<ar[j]<<" ";
        }
    }cout<<endl;
} 
int main()
{
    int ar[4]={1,2,3,4};
    subset(ar,4);
    return 0;
}
