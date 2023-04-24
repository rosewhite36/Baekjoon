#include <stdio.h>

int main()
{
	int a[100];
	int n, m, max=0, sum;
	
	scanf("%d %d", &n, &m);
	
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(j==i) continue;
			for(int k=0; k<n; k++)
			{
				if(k==i || k==j) continue; 
				sum=a[i]+a[j]+a[k];
				if(max<sum && sum<=m) max=sum;
			}
		}
	}
	printf("%d", max);
}