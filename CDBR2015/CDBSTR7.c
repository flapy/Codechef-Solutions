#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[100005],m[100005];
		scanf("%s",s);
		scanf("%s",m);
		int a[26],b[26],i;
		for(i=0;i<26;i++)
		{
			a[i]=b[i]=0;
		}
		for(i=0;s[i]!='\0';i++)
		{
			a[s[i]-'a']++;
		}
		for(i=0;m[i]!='\0';i++)
		{
			b[m[i]-'a']++;
		}
		int flag=1;
		for(i=0;i<26;i++)
		{
			if(a[i]==b[i])
			{
				continue;
			}
			else
			{
				flag=0;
				break;
			}
		}
		if(flag)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
