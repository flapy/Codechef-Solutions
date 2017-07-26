//Chirag Agarwal
#include<stdio.h>
int main()
{
	char s[100005];
	long long int a[26]; 
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%s",s);
		long long int i,cnt;
		for(i=0;i<26;i++) // use it to store every alphabet occurence to zero
		{
			a[i]=0;
		}
		i=0;
		cnt=0;
		while(s[i]!='\0')
		{
			a[s[i]-'a']++; //making changes corresponding to entry in the int array
			i++;
		}
		for(i=0;i<26;i++)
		{
			if(a[i]!=0)
			cnt++;
		}
		printf("%lld\n",cnt);
	}
	return 0;
}
