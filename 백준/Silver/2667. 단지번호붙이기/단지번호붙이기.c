char m[25][25];
a[313],n,s,i;
d(y,x){if(x<0||y<0||x==n||y==n||m[y][x]==48) return;m[y][x]=48;a[s]++;d(y,x+1),d(y+1,x),d(y,x-1),d(y-1,x); }
main(j){
	for(scanf("%d",&n);~scanf("%s",m+i++);); 
	for(i=0;i<n;i++) for(j=0;j<n;j++) if(m[i][j]-48) d(i,j),s++;
	for(i=s;--i>0;) for(j=0;j<i;j++) if(a[j+1]<a[j]) a[j+1]^=a[j]^=a[j+1]^=a[j];
	for(printf("%d\n",s);i<s;) printf("%d\n",a[i++]);
}