#include <stdio.h>
#define f(i,n) for(i=0;i<n;i++)
int i, j, a, b, n, m, sum, min=65, max;
char chess[50][50];
int main()
{
	scanf("%d %d", &n, &m);
	f(i,n) scanf("%s", chess[i]);
	
	f(i,n-7)
	{
		f(j,m-7)
		{
			f(a,8) f(b,8) sum+=(a+b)%2^chess[i+a][j+b]&1;
			if(sum>max) max=sum;
			if(min>sum) min=sum;
			sum=0;
		}
	}
	printf("%d", 64-max>min?min:64-max);	
}