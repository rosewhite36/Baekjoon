#include <iostream>

using namespace std;
int main()
{
	int n, i, x, count=0;
	
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		x=i;
		while(x!=0)
		{
			if(x%10==3 || x%10==6 || x%10==9)
			{
				count++;
			}
			x/=10;
		}
	}
	
	cout<<count;
}
