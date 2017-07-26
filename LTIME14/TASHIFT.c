#include<stdio.h>
char a[1000003],b[1000003];
long long int length;
void shift();
int main()
{
	long long int ans,i,ans1=0,pos=0,j;
	scanf("%lld",&length);
	scanf("%s",a);
	scanf("%s",b);
	for(j=0;j<length;j++)
	{
		if(a[j]==b[j])
			ans1++;
		else
			break;
	}
	for(i=0;i<length;i++)
	{
		ans=0;
		shift();
		for(j=0;j<length;j++)
		{
			if(a[j]==b[j])
			ans++;
			else
			break;
		}
		if(ans>ans1)
		{
			pos=i+1;
			ans1=ans;
		}
	}
	printf("%lld",pos);
	return 0;
}
void shift()
{
	long long int i;
	char s=b[0];
	for(i=1;i<=length-1;i++)
	{
		b[i-1]=b[i];
	}
	b[length-1]=s;
}
