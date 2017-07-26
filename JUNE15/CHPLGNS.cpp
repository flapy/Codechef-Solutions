#include<bits/stdc++.h>
using namespace std;
    #define inchar getchar_unlocked
            #define pc putchar_unlocked
        inline int inp() {
    	int n, ch;
    	while ((ch = inchar()) < '0');
    	n = (ch - '0');
    	while ((ch = inchar()) >= '0')
    		n = (n << 3) + (n << 1) + (ch - '0');
    	return n;
    }
        inline void print(int n)
    {
    	char ch[10];
    	int ind=0;
    	if(n<0)
    	{
    		pc('-');
    		n *= -1;
    	}
    	if(n == 0)
    	{
    		pc('0');
    	}
    	while(n > 0)
    	{
    		ch[ind] = n%10 + '0';
    		n /= 10;
    		ind++;
    	}
    	while(ind--) pc(ch[ind]);
    	pc(' ');
    }
     inline void println(int n)
    {
    	char ch[10];
    	int ind=0;
    	if(n<0)
    	{
    		pc('-');
    		n *= -1;
    	}
    	if(n == 0)
    	{
    		pc('0');
    	}
    	while(n > 0)
    	{
    		ch[ind] = n%10 + '0';
    		n /= 10;
    		ind++;
    	}
    	while(ind--) pc(ch[ind]);
    	pc('\n');
    }
int main()
{
	int t,n,m;
	pair <int,int> p[100005];
	t=inp();
	while(t--)
	{
		n=inp();
		for(int i=0;i<n;i++)
		{
			m=inp();
			int max,x,y;
			for(int j=0;j<m;j++)
			{
				x=inp();
				y=inp();
				if(j==0)
				{
					max=x;
				}
				else
				{
					if(x>max)
					max=x;
				}
			}
			p[i]=make_pair(max,i);
		}
		int k=1,ans[100005];
		sort(p,p+n);
		for(int i=n-1;i>=0;i--)
		{
			//printf("%d %d\n",p[i].first,p[i].second);
			ans[p[i].second]=n-k;
			k++;
		}
		for(int i=0;i<n;i++)
		{
		    if(i!=n-1)
		    print(ans[i]);
	        else
	        println(ans[i]);
	    }
	}
	return 0;
}
