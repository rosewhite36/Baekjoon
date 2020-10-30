#include <iostream>

using namespace std; 
int main()
{
	int i, people=0, in, out, max=0;
	
	for(i=0; i<4; i++)
	{
		cin>>in>>out;
	
		people-=in;
		people+=out;
		
		if(people>max)
		{
			max=people;
		}	
	}
	
	cout<<max;
}
