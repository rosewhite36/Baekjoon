a,d,k,i,j;main(b){
	for(scanf("%d %d",&d,&k); d-->2; a=b-a) b+=a;
	for(; i++<k;) for(j=0; j++<k;) if(a*i+b*j==k&&i<j) printf("%d\n%d",i,j),i=j=k;
}
	