#include <stdio.h>

int main()
{
	int n, i;
	float m, max=0, sum;
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
	{
		scanf("%3f", &m);
		max=m<max?max:m;
		sum+=m;
	}
	printf("%.3f", 100/max*sum/n);
}