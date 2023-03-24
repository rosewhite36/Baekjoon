#include <stdio.h>

char word[100], word2[100], want[1000];
int i, j, c, flag;

int main()
{
	scanf("%s", word);
	scanf("%s", want);
	
	for(i=0; word[i]; i++)
	{
		if(word[i]>57)
		{
			word2[j++]=word[i];
		}
	}
	
	for(i=0; word2[i]; i++)
	{
		if(word2[i]==want[0])
		{
			for(j=0; want[j]; j++)
			{
				if(word2[i+j]!=want[j])
				{
					flag++;
					break;
				}
			}
			if(!flag)
			{
				c++;
				break;
			}
		}
		flag=0;
	}
	printf("%d", c);
}