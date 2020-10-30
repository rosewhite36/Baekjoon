#include <iostream>

using namespace std;
int main()
{
	int n, i, min=0, count=0;
	int a[100000]={0};
	
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		cin>>a[i];
	} 
	
	for(i=n-1; i>=0; i--)
	{
		if(a[i]>min)
		{	
			min=a[i];
			count++;
		}
	}
	cout<<count;
}
