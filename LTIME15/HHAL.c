#include<string.h>
#include<stdio.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		char s1[100003];
		long long int len,i=0;
		scanf("%s",s1);
		len=strlen(s1);
		long long int k=len;
		k--;
		int flag=1;
		if(len==1)
		printf("1\n");
		else
		{
			while(s1[i]!=0)
			{
				if(s1[i]==s1[k])
				{
					i++;
					k--;
				}
				else 
				{
					flag=0;
					break;
				}
			}
			if(flag==1)
			printf("1\n");
			else
			printf("2\n");
		}
	}
	return 0;
}
