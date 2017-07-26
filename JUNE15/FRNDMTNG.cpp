#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int chef,yuri,t1,t2,total;
		scanf("%lld %lld %lld %lld",&chef,&yuri,&t1,&t2);
		total=chef*yuri;
		//equation 1=yuri-chef<=t1
		//equation 2=chef-yuri<=t2
		if(t1==0 && t2==0)
		{
			printf("0\n");
		}
		else if(t1==0)
		{
			long long int c1,c2,p1,p2;
			p2=chef;
			if(p2<=yuri)
			{
				c2=p2;
			}
			else
			c2=yuri;
			c1=0;
			double area1=(c2*c2)/2.0;
			long long int x1,x2,k1,k2,k3,k4;
			x1=0;
			k1=chef-t1;
			if(k1<=yuri)
			{
				x2=k1;
			}
			else
			{
				x2=yuri;
			}
			double ans;
			double area2=((x2*x2-x1*x1))/2.0+(double)t2*(x2-x1);
			if(area2>area1)
			{
				ans=area2-area1;
			}
			else
			ans=area1-area2;
			printf("%lf\n",ans/((double)(total)));
		}
		else if(t2==0)
		{
			long long int c1,c2,p1,p2;
			p2=chef;
			if(p2<=yuri)
			{
				c2=p2;
			}
			else
			c2=yuri;
			c1=0;
			double area1=(c2*c2)/2.0;
			//yuri-chef<=k
			long long int x1=t1;
			long long int x2=chef+t1;
			if(x2>yuri)
			{
				x2=yuri;
			}
			double ans;
			double area2=((x2*x2-x1*x1))/2.0-(double)t1*(x2-x1);
			if(area2>area1)
			{
				ans=area2-area1;
			}
			else
			ans=area1-area2;
			printf("%lf\n",ans/((double)(total)));
		}
	}
	return 0;
}
