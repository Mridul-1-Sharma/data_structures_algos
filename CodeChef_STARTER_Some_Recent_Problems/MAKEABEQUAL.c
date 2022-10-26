// Problem Code is " MAKEABEQUAL "
// Search this Problem Code on CodeChef in order to see question.

#include <stdio.h>

int main()
{
	long long int i,t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);

		long long int a[n],b[n];

		for(i=0;i<n;i++)
		scanf(" %lld",&a[i]);

		for(i=0;i<n;i++)
		scanf(" %lld",&b[i]);

		long long int flag=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>b[i])
			{
				flag=flag+(a[i]-b[i]);
			}
			else
			{
				flag=flag+(b[i]-a[i]);
			}
		}

		int suma=0,sumb=0;
		for(int i=0;i<n;i++)
		{
			suma=suma+a[i];
			sumb=sumb+b[i];
		}

        if(suma==sumb)
        printf("%lld\n",flag/2);
        else
        printf("-1\n");
	}

    return 0;
}