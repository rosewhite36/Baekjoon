#include <bits/stdc++.h>
using namespace std;
	
int main(void)
{
	priority_queue<int,vector<int>,greater<int>> pq1; //양수
	priority_queue<int> pq2; //음수
	
	int n, a, t1, t2;
	
	cin>>n;
	
	while(n--)
	{
		cin>>a;
		
		if(a>0)	pq1.push(a);
		else if(a<0) pq2.push(a);
		
		else
		{
			t1=pq1.empty()?0:pq1.top();
			t2=pq2.empty()?0:pq2.top();
			
			if(!t1&&!t2) printf("0\n");
			
			else if(t1==0)
			{
				printf("%d\n", t2);
				pq2.pop();
			}
			
			else if(t2==0)
			{
				printf("%d\n", t1);
				pq1.pop();
			}
			
			else
			{
				if(t1+t2<0)
				{
					printf("%d\n", t1);
					pq1.pop();
				}
				
				else if(t1+t2>0)
				{
					printf("%d\n", t2);
					pq2.pop();
				}
				
				else
				{
					printf("%d\n", t2);
					pq2.pop();
				}
			}
		}
	}
	
}