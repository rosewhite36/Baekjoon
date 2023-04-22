#include <stdio.h>

#define vs 1e8

int main()
{
	long long n, t, l, i, j;
	int c, f=0;
	char time[6];
	
	scanf("%d", &c);
	while(c--)
	{
		scanf("%s %d %d %d", time, &n, &t, &l);
		
		if(time[4]=='2')
			f=(n*n*t>l*vs);
		
		else if(time[4]=='3')
		{
			for(i=1; i<=n; i++)
			{
				if(i*i*i*t>l*vs)
				{
					f=1;
                    break;
				}
			}
		}
			
		
		else if(time[4]==')')
		{
			for(i=1; i<=n; i++)
			{
				j*=i;
				if(j*t>l*vs)
				{
					f=1;
					break;
				}
			}	
		}	
		
		else if(time[4]=='N')
		{
			for(i=1; i<=n; i++)
			{
				j*=2;
				if(j*t>l*vs)
				{
					f=1;
					break;
				}
			}
		}
			 
		else f=(n*t>l*vs);

		printf("%s\n", f?"TLE!":"May Pass.");
		j=1, f=0;
	}
}