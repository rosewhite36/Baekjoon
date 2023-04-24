#include <stdio.h>

int n, m, max, a[100];

void rc(int index, int sum, int element)
{
	element++,sum+=a[index];
	if(index==n || element>3) return;

	if(element==3 && max<sum && sum<=m) max=sum;
	
	rc(index+1, sum, element);
	rc(index+1, sum-a[index], element-1);
}


int main()
{
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	rc(0,0,0);
	printf("%d", max);
}