#include <iostream>

using namespace std;
int main()
{
	char words[5][16]={0};
	char word[16]={0};
	int i, j;
	
	for(i=0; i<5; i++)
	{
		cin>>word;
		for(j=0; j<15; j++)
		{
			words[i][j]=word[j];
			word[j]=0;
		}
	}
	
	for(j=0; j<15; j++)
	{
		for(i=0; i<5; i++)
		{
			if(words[i][j]!=0)
			{
				cout<<words[i][j];
			}
		}
    }
}
