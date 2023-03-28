#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> b[1001];
vector<int> d[1001];

int vb[1001], vd[1001];

void bfs(int start)
{
	queue<int> q;
	
	q.push(start);
	vb[start]=1;
	
	while(!q.empty())
	{
		int s=q.front();
		q.pop();
		cout<<s<<' ';	
		
		for(int i=0; i<b[s].size(); i++)
		{
			int t=b[s][i];
			
			if(!vb[t])
			{
				q.push(t);
				vb[t]=1;
			}
		}
	}	
}

void dfs(int x)
{
	if(vd[x]) return;
	vd[x]=1;
	cout<<x<<' ';
	
	for(int i=0; i<d[x].size(); i++)
		dfs(d[x][i]);
}

int main()
{
	int i, n, m, v, x, y;
	cin>>n>>m>>v;
	for(i=0; i<m; i++)
	{
		cin>>x>>y;
		b[x].push_back(y);
		b[y].push_back(x);
		d[x].push_back(y);
		d[y].push_back(x);
	}
	
	for(i=1; i<=n; i++)
	{
		sort(b[i].begin(),b[i].end());
		sort(d[i].begin(),d[i].end());
	}
	
	dfs(v);
	cout<<"\n";
	bfs(v);
}