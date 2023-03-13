#include <stdio.h>

int a[1000001]={0,1};
int i,j,m,n;

int main()
{
	scanf("%d %d", &m, &n);
    
    for(i=2; i<=n; i++) for(j=i*2; j<=n; j+=i) a[j]=1;
    
    for(i=m; i<=n; i++) if(!a[i]) printf("%d\n", i);
}