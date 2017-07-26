#include<stdio.h>
int main()
{
	char s[100000];
	long long int i,l;
	int t,flag;
	scanf("%d",&t);
	while(t--)
	{
		flag=0;
		scanf("%s",s);
		i=0;
		while(s[i+2]!='\0')
		{
			if(s[i]=='0')
			{
				if(s[i+1]=='1' && s[i+2]=='0')
				{
					printf("Good\n");
					flag=1;
					break;
				}
			}
			else
			{
					if(s[i+1]=='0' && s[i+2]=='1')
					{
						printf("Good\n");
						flag=1;
						break;
					}
			}
			i++;
		}
		if(flag==0)
		printf("Bad\n");
	}
	return 0;
}
