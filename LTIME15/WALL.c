#include<stdio.h>
int main()
{
	long long int test,n,m,h,a,b,ind,i,j,d[1000000],w,r;
	scanf("%lld",&test);
	while(test--)
	{
		scanf("%lld %lld %lld",&r,&n,&m);
		scanf("%lld %lld %lld",&a,&b,&ind);
		for(i=0;i<m;i++)
		{
			scanf("%lld",&d[i]);
		}
		long long int p=0,nw;
		for(j=1;j<n;j++)
		{
    			nw=p+d[ind];
				p=nw;
	   			ind=(a*ind+b)%m;
      	}
	      	double ans=(r*p)/2.0;
	      	printf("%.1lf",ans);
			if(test!=0)
			printf("\n");	
	}
	return 0;
}
