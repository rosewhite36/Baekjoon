char arr[101];
int n,i,j,la,lb,c,d,a[26],b[26];

int main()
{
	scanf("%d%s", &n,arr);
	la=strlen(arr);
	
	for(i=0; i<la; i++) 
		a[arr[i]-'A']++;
	
	for(j=1; j<n; j++)
	{
		d=0;
		scanf("%s",arr);
		lb=strlen(arr);
		for(i=0; i<lb; i++) 
			b[arr[i]-'A']++;
		
		for(i=0; i<26; i++)
		{
			d+=abs(a[i]-b[i]);
			b[i]=0;
		}
		
		if(d<=2) if(d<=1 || la==lb) c++;
	}
	printf("%d",c);
}