#include <iostream>
#include <algorithm>
using namespace std;
int i,j,m,n,l,L1,L2,s,e,mid,c,x[100000],a[100000],b[100000];
main(){
	for(cin>>m>>n>>l;i<m;i++) cin>>x[i];
	for(i=0;i<n;i++) cin>>a[i]>>b[i];
	sort(x,x+m);
	for(i=0; i<n; i++){
		s=0,e=m-1;
		L1=a[i]+(l-b[i]),L2=a[i]-(l-b[i]);
		while(s<=e)
        {
			mid=(s+e)/2;
			if(x[mid]>L1) e=mid-1;
			else if(x[mid]<L2) s=mid+1;
			else {c++;break;}
		}
	}
	cout<<c;
}  