#include<stdio.h>
int main()
{
int cnt=0,i=0,p;
char s[100];
scanf("%d",&p);
while(p--)
{
	i=0;
	scanf("%s",s);
	while(s[i]!='\0')
	{
		if(s[i]=='B')
		cnt=cnt+2;
		else if(s[i]=='O' || s[i]=='D' || s[i]=='P' || s[i]=='A' || s[i]=='R' ||s[i]=='Q')
		cnt++;
		i++;
	}
	printf("%d\n",cnt);
		cnt=0;
	
}
return 0;
}
