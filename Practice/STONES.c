#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<stdlib.h>
//Chirag Agarwal
int main()
{
	int t;
	char s[105],s1[105];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		scanf("%s",s1);
		int l,l1,cnt,i,j;
		cnt=0;
		l=strlen(s);
		l1=strlen(s1);
		for(i=0;i<l;i++)
		{
			for(j=0;j<l1;j++)
			{
				if(s[i]==s1[j])
				{
					s1[j]='&';	
					cnt++;
				}
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}
