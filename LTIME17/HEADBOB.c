#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		char s[1003];
		scanf("%s",s);
		int flag=0,i;
		for(i=0;i<n;i++)
		{
			if(s[i]=='I')
			{
				flag=1;
				break;
			}
			else if(s[i]=='Y')
			{
				flag=2;
				break;
			}
		}
		if(flag==1)
		printf("INDIAN\n");
		else if(flag==2)
		printf("NOT INDIAN\n");
		else
		printf("NOT SURE\n");
	}
	return 0;
}
