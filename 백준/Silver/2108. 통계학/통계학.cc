#include <bits/stdc++.h> 
#define fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using namespace std;

int a[500001], c[9000], i, x, n, m=0, od;
double s; 

int main()
{
    fast;

	for(cin>>n; i<n; i++)
	{
		cin>>x;
		s+=a[i]=x;
		x+=4000;
		if(++c[x]>m) m=c[x];
	}
	sort(a,a+n);
	
	auto p=find(c,c+8000,m);
	auto q=find(p+1,c+8000,m);
	
	if(*p==*q) od=q-c;
	else od=p-c;	

    cout<<(int)floor(0.5+s/n)<<'\n'<<a[n/2]<<'\n'<<od-4000<<'\n'<<a[n-1]-a[0];
}