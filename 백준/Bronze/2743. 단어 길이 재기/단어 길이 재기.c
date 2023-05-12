#include <stdio.h>

int main()
{
   char str[101];
   int i;
   
   scanf("%s", str);
   
   for(i=0; i<100; i++) if(str[i] == '\0') break;

	printf("%d", i);
}