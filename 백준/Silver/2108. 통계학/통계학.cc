#include <bits/stdc++.h> 
using namespace std;

int num[500001];
int cnt[9000];

int main()
{
	int n, x, m, max=0;
	double sum;
	int mode; 
	
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &x);
		num[i]=x;		//값
		sum+=x; 		//총합
		
		x+=4000;		//음수일때를 대비하여 +4천 해줌 
		cnt[x]++;
//		if(x>m) m=x;
//		cnt[x]++;		//개수
		if(cnt[x]>max) max=cnt[x];
	}
	
	sort(num,num+n);	
	auto p=find(cnt,cnt+8000,max);	//최빈값중 가장 작은 값 
	//p-cnt = index
	auto q=find(p+1,cnt+8000,max);	//최빈값중 두번째로 작은 값 or 차빈값 
	if(*p==*q) mode=q-cnt;		//최빈값이 2개 이상일 때 
	else mode=p-cnt;	

	printf("%.0lf\n%d\n%d\n%d", floor(0.5+sum/n), num[n/2], mode-4000, num[n-1]-num[0]);
	//산술평균, 0.5를 더하고 가우스함수를 취하면 반올림과 같다.
	//round함수 사용시 -0으로 출력되는 경우를 따로 처리해야하는 귀찮음이 있다. 
}