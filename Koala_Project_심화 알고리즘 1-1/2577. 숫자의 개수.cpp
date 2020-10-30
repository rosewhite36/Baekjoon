#include <iostream>

using namespace std;
int main()
{
	int a, b, c, n, number, i;
	int arr[10]={0};
	
	cin>>a>>b>>c;
	
	n=a*b*c;
	
	while(n!=0)
	{
		number=n%10;
		n/=10;
		arr[number]++;
	}
	
	for(i=0; i<10; i++)
	{
		cout<<arr[i]<<"\n";
	}
}
