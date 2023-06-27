#include <stdio.h>
#include <stdbool.h>
#include <math.h>

long long x, y, l, h=1e9, m, max;
double z, _z;

int main()
{
	scanf("%lld %lld", &x, &y);
	z=(double)y*100/x;
	
	if(z>=99)
	{
		max=-1;
		l=h;
	}
	
	while(l<=h)
	{
		m=(l+h)/2;
		_z=(double)(y+m)*100/(x+m);
		if(floor(_z)>floor(z))
		{
			max=m;
			h=m-1;
		}
		else l=m+1;
	}
	printf("%lld", max);
}