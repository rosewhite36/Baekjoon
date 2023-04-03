m[101][101],c[101][101],n,i,j,k,h,a;
d(y,x){
	if(!(x*y)||x>=n||y>=n||m[y][x]<=h||c[y][x]) return;
	c[y][x]=1;
	d(y,x+1),d(y+1,x),d(y,x-1),d(y-1,x); }
main(x){
	scanf("%d", &n);
	for(n++;++i<n;) for(j=0;++j<n;) scanf("%d",&m[i][j]);
	for(;h<100;h++,a=0){
		for(i=0;++i<n;x=x<a?a:x) for(j=0; ++j<n;) if(!c[i][j]&&m[i][j]>h) d(i,j),a++;	
		for(k=0;++k<n;)memset(c[k],0,sizeof 4*n); }
	printf("%d",x); }