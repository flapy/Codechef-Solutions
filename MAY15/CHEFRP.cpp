#include<stdio.h>
#include<list>
using namespace std;
int main()
{
	long long int t,n;
	scanf("%lld",&t);
	while(t--)
	{
		list<long long int> l;
		scanf("%lld",&n);
		int flag=1;
		long long int k,j;
		for(j=0;j<n;j++)
		{
			scanf("%lld",&k);
			l.push_back(k);
		}
		l.sort();
		list<long long int> :: iterator i;
		for(i=l.begin();i!=l.end();i++)
		{
		//	printf("%lld",*i);
			if(*i<2)
			{
				flag=0;
				break;
			}
		}
		if(!flag)
		printf("-1\n");
		else
		{
			long long int sum=0,p=0;
			for(i=l.end();i!=l.begin();i--)
			{
				if(p==0)
				{
					p++;
				}
				else
				sum+=*i;
			}
			printf("%lld\n",sum+2);
		}
	}
	return 0;
}
