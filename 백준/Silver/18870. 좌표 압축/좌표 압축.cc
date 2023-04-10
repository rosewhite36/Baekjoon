#include <bits/stdc++.h>
#define fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using namespace std;

int main()
{
	fast;
	int n, i, a;
	vector<int> v;
	
	cin>>n;
	for(i=0; i<n; i++)
	{
		cin>>a;
		v.push_back(a);
	}
	vector<int> u(v);
		
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	
	for(i=0; i<n; i++) cout<<lower_bound(v.begin(), v.end(), u[i])-v.begin()<<' ';
}