#include <bits/stdc++.h>
#define fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using namespace std;

int main()
{	
	fast;
	int n, a;
	priority_queue<int,vector<int>,greater<int>> pq;
	
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin>>a;
		pq.push(a);
	}
	
	for(int i=0; i<n*n-n; i++)
	{
		cin>>a;
		if(a>pq.top())
		{
			pq.pop();
			pq.push(a);
		}
	}
	
	cout<<pq.top();
}
