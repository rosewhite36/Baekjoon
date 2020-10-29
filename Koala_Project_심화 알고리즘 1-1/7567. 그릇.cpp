#include <iostream>

using namespace std;
int main()
{
	char bowl[50];
	int b=0, i, sum=0;
	
	cin>>bowl;
	
	for(i=0; bowl[i]!=0; i++)
	{
		if(b==bowl[i])
		{
			sum+=5;
		}
		
		else
			sum+=10;
		b=bowl[i];
	}
	
	cout<<sum;
}
