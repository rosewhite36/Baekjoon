#include <stdio.h>

int n, s, c;
int a[20];

void rc(int index, int sum)
{
	if(index>=n) return;
	
	sum+=a[index];
	
	if(sum==s) c++;
	
	rc(index+1, sum);
	rc(index+1, sum-a[index]);
}

int main()
{
	scanf("%d %d", &n ,&s);
	
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	
	rc(0,0);
	
	printf("%d", c);
}