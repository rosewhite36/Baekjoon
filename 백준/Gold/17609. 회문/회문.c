a,s,e,x,n,k,i;
char c[100000];
p(){if(e<s) return;if(c[s]-c[e]) return a++;s++,e--;p();}
main(){for(gets(&n);~scanf("%s",c);a=s=0){e=n=strlen(c)-1;p();if(a)x=s,s++;p();if(a==2)a--,s=x,e=n-s-1;p();printf("%d\n",a);}}