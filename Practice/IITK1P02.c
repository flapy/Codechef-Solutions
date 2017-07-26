#include<stdio.h>
int main()
{
	char s[100005],a,max=0;
	long long int j=0,i=0,p=0;
	scanf("%s",s);
	while(s[i]!='\0')
	{
		j=i;
		long long int cnt=0;
		while(s[j]==s[i])
		{
			cnt++;
			j++;
		}
		if(cnt>max)
		{
			max=cnt;
			a=s[i];
		}
		else if(cnt==max)
		{
			max=cnt;
			if(s[i]<a)
			a=s[i];
		}
		i++;
	}
	printf("%c\n",a);
	printf("%lld\n",max);
	return 0;
}
