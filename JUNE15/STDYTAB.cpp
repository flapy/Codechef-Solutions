#include<iostream>
    #include<stdio.h>
    using namespace std;
    #include<vector>
     
    
    #define gc getchar_unlocked
int countFact(int n, int p)
{
    int k=0;
    while (n>0)
    {
        k+=n/p;
        n/=p;
    }
    return k;
}
      int read_int() {
        char c = gc();
        while(c < '0' || c > '9') c = gc();
        int ret = 0;
        while(c >= '0' && c <= '9') {
            ret = 10 * ret + c - 48;
            c = gc();
        }
        return ret;
    }
/* This function calculates (a^b)%MOD */
long long pow(int a, int b, int MOD)
{
    long long x=1,y=a; 
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD; 
        b /= 2;
    }
    return x;
}
 
long long C(int n, int r, int MOD)
{
    long long res = 1;
    vector<bool> isPrime(n+1,1);
    for (int i=2; i<=n; i++)
        if (isPrime[i])
        {
            for (int j=2*i; j<=n; j+=i)
                isPrime[j]=0;
            int k = countFact(n,i) - countFact(r,i) - countFact(n-r,i);  
            res = (res * pow(i, k, MOD)) % MOD;
        }
    return res;
}
        int main()
        {
        	long long no_row[2003],no_way_row[2004],sum_row[2004],new_row[2004];
        	int t;
        	t=read_int();
        	while(t--)
        	{
        		int n,m,k;
        		n=read_int();m=read_int();
        		k=m;
        				int i,j,k1;
        		for(i=0;i<=m;i++)
        		{
        			no_way_row[i]=C(i+k-1,k-1,1000000000);//here it should be 10^9
        			sum_row[i]=no_way_row[i];
        			new_row[i]=no_way_row[i];
        			//printf("%ld\n",no_way_row[i]);
        		}
        		//1 2 3
        		//1*1 (1+2)*2 (1+2+3)*3
        		//1*1  (1+6)*2  (1+6+18)*3
        		for(k1=1;k1<n;k1++)
        		{
        			for(j=1;j<=m;j++)
        			{
        				new_row[j]=(new_row[j-1]+new_row[j])%1000000000;
        			}
        			for(i=0;i<=m;i++)
        			new_row[i]=(new_row[i]*no_way_row[i])%1000000000;
        		}
        		long long sum=0;
        		for(i=0;i<=m;i++)
        		{
        			sum=(sum+new_row[i])%1000000000;
        		}
        		printf("%ld\n",sum);
        	}
        	return 0;
        }
