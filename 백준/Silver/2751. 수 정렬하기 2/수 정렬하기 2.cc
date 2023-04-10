#include <bits/stdc++.h>
#define fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using namespace std;
int a[1000000];

int main()
{
	fast;
	int n, i;
	cin>>n;
	for(i=0; i<n; i++)	cin>>a[i];
	sort(a,a+n);
	for(i=0; i<n; i++)	cout<<a[i]<<'\n';
}