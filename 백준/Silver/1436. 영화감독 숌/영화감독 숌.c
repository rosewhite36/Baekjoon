#include <stdio.h>

int main()
{
	int i,n;
	char a[8];
	
	scanf("%d", &n);
	for(i=666;n>0;i++)
	{
		sprintf(a,"%d",i);
		if(strstr(a,"666")!=0x0) n--;
	}
	printf("%d", i-1);
}