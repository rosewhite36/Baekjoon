#include <bits/stdc++.h>
#define fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using namespace std;

int main()
{
	fast;
	
	int n, m, a;
	vector<int> v;
	
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a;
		v.push_back(a);
	}
	
	auto s=v.begin();
	auto e=v.end();
	
	sort(s,e);
	
	cin>>m;
	while(m--)
	{
		cin>>a;
		cout<<upper_bound(s,e,a)-lower_bound(s,e,a)<<' ';
	}
}