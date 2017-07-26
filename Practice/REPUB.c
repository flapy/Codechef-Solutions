#include<stdio.h>
int main()
{
	long long int t;
	scanf("%lld\n",&t);
	while(t--)
	{
		long long int i=0;
		char s[100005];
		gets(s);
		long long int a[26]={0};
		while(s[i]!='\0')
		{
			if(s[i]>122 || s[i]<65 || (s[i]>90 && s[i]<97))
			{
				i++;continue;
			}
			else
			{
				if(s[i]>=65 && s[i]<=90)
				{
					s[i]=s[i]+32;
				}
				a[s[i]-97]++;	
			}
			i++;
		}
		long long int pos=0,max;
		for(i=0;i<26;i++)
		{
			if(i==0)
			{
				max=a[i];
			}
			else
			{
				if(a[i]>=max)
				{
					max=a[i];
					pos=i;
				}
			}
		}
		char c=(char)(pos+97);
		printf("%c\n",c);
	}
	return 0;
}
