#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
	int n, a;
	
	priority_queue<int> pq;
	
	cin>>n;
	
	while(n--)
	{
		cin>>a;
		
		if(a) pq.push(a);
		
		else if(pq.empty())
		{
			printf("0\n");
		}
		
		else
		{
			printf("%d\n", pq.top());
			pq.pop();
		}
	}
}