x[101],n,s,k,i,j,a;main(){
	for(scanf("%d",&n);i++<n;)scanf("%d",x+i);
	for(scanf("%*d");~scanf("%d%d",&s,&k);){if(s==1){for(j=0;j++<n;)if(j%k==0)x[j]^=1;}else{x[k]^=1;for(a=1;x[k+a]==x[k-a];x[k-a]^=1,x[k+a]^=1,a++)if(k+a>n||k-a<1)break;}}
	for(i=0;i++<n;){printf("%d ",x[i]);if(!(i%20))puts("");}}