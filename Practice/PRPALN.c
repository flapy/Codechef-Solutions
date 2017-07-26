//Chirag Agarwal
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
long long int old;
int palin(char *s)
{
     int flag=1;
   long long int i=0;
   long long int l=old-1;
   l--;
   char t;
	while(i<l)
	{
		if(s[i]==s[l])
		{
			i++;l--;
			continue;
		}
		else
		{
			flag=0;
			break;
		}
	}
		if(flag==1) 
      return 1;
   else
      return 0;
}
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		char s[100005];
		scanf("%s",s);
		long long int len=strlen(s),i,j,k;
		old=len;long long int tru=0;
		for(i=0;i<len;i++)
		{
			char check[100005];
			for(j=0,k=0;k<old-1;j++)  // for the string with 1 char less
 			{
				if(j!=i)
				{
					check[k]=s[j];
					k++;
				}
			} //this could work due to Time Limit 5 seconds!
			check[k]='\0';
			int ans=palin(check);
			if(ans==1)
			{
				tru=1;
				printf("YES\n");
				break;
			}
		}
		if(tru==0)
		printf("NO\n");
	}
	return 0;
}
