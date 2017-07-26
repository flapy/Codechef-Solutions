#include<stdio.h>
int main()
{
	int s[10000],t[10000],p1,p2,n,i=1,max=0,w;
	s[0]=0;
	t[0]=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&s[i],&t[i]);
		s[i]=s[i]+s[i-1];
		t[i]=t[i]+t[i-1];
		p1=s[i]-t[i];
		p2=-p1;
		if(p1>p2 && p1>max)
		{
			w=1;
			max=p1;
		}
		else if(p1<p2 && p2>max)
		{
			w=2;
			max=p2;
		}
		i++;
	}
	if(max==p1)
	printf("%d %d",w,max);
	else
	printf("%d %d",w,max);
	return 0;
}
