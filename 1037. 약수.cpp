#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, i; 
    int a[50];
    
    cin>>n;
	for(i=0; i<n; i++)
		cin>>a[i];
    
    sort(a,a+n);
    
    cout<<a[0]*a[n-1];
}
