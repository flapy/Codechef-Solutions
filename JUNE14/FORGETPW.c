#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	long long int i,j,l,pos,k;
	int t,n,q=1;
	char s[1000002],c[100][2],p[100][2];
	scanf("%d",&t);
	while(t--)
	{
		q=1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s",c[i]);
			scanf("%s",p[i]);
		}
		i=0;
		j=0;
		scanf("%s",s);
		if(n==0)
		{
			
		}
		else
		{
				while(s[i]!='\0')
				{
					for(j=0;j<n;j++)
					{
						if(s[i]==c[j][0])
						{
							s[i]=p[j][0];
							break;
						}
					}
					i++;
				}
		}
		l=strlen(s);
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='.')
			{
				q=0;
				pos=i;
				break;
			}
		}
		if(q)
		{
			for(i=0;s[i]!='\0';i++)
			{
				if(s[i]=='0')
				{
					
				}
				else
				break;
			}
			if(i==l)
			printf("0");
			else
			{
				for(j=i;s[j]!='\0';j++)
				{
					printf("%c",s[j]);
				}
			}	
			printf("\n");
		}
		else
		{
			for(i=0;i<=pos;i++)
			{
				if(s[i]=='0')
				{
				
				}
				else
				{
					break;
				}
			}
			for(j=l-1;j>=pos;j--)
			{
				if(s[j]=='0')
				{
					
				}
				else if(s[j]=='.')
				{
					
				}
				else
				break;
			}
			if(i==pos && j==pos-1)
			{
				printf("0");
			}
			else
			{
				for(k=i;k<=j;k++)
				{
					printf("%c",s[k]);
				}
			}
			printf("\n");
		}
	}
		return 0;
}
