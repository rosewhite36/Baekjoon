main(){int x1,x2,x3,x4,y1,y2,y3,y4,a,b,c,d,l;
	scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	a=x2-x3,b=x1-x4,c=y2-y3,d=y1-y4;
	puts(!a||!b?(!c||!d?"POINT":"LINE"):(!c||!d?(b<0?"LINE":"NULL"):(y4<y1||y2<y3||x4<x1||x2<x3?"NULL":"FACE")));}