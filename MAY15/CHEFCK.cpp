#include <stdio.h>
#include <math.h>
#include <limits.h>
#include<stdlib.h>
#define MOD 1000000007
using namespace std;
#define pc putchar_unlocked
#define inchar getchar_unlocked
inline long long int inp() {
	long long int n, ch;
	while ((ch = inchar()) < '0');
	n = (ch - '0');
	while ((ch = inchar()) >= '0')
		n = (n << 3) + (n << 1) + (ch - '0');
	return n;
}
inline void print_sum(long long int n)
{
	char ch[200];
	long long int ind=0;
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
inline void print(long long int n)
{
	char ch[200];
	long long int ind=0;
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
long long int  *Build_segment(long long int  [], long long int  ) ;
long long int  Middle(long long int  , long long int  );
long long int  Minimum(long long int  , long long int  );
long long int  RangeMinimumQuery(long long int  *, long long int , long long int , long long int , long long int , long long int );
long long int  RMQ(long long int  *, long long int  , long long int  , long long int  );
long long int  SegmentTreebuild(long long int [], long long int , long long int , long long int  *, long long int );
long long int  *Build_segment(long long int [], long long int );
int main()
{
		long long int  N,K,Q;
		N=inp();
		K=inp();
		Q=inp();
		//scanf("%lld %lld %lld",&N,&K,&Q);
		long long int *A;
		A=(long long int *)malloc(sizeof(long long int )*(N+2));
		long long int  a, b, c, d, e, f, r, s, t, m;
		//printf("HI\n");
		//scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f,&r,&s,&t,&m,&A[0]);
		a=inp();
		b=inp();
		c=inp();d=inp();e=inp();f=inp();r=inp();s=inp();
		t=inp();m=inp();A[0]=inp();
		//printf("hi\n");
		long long int L1, La, Lc, Lm, D1, Da, Dc,Dm,x,i,L,R,j;
		//scanf("%lld %lld %lld %lld %lld %lld %lld %lld",&L1,&La,&Lc,&Lm,&D1,&Da,&Dc,&Dm);
		L1=inp();La=inp();Lc=inp();Lm=inp();D1=inp();Da=inp();Dc=inp();Dm=inp();
		long long int *ans = (long long int *) malloc(sizeof(long long int )* (N+2));
		ans[0]=1;
		for(i=1;i<=N;i++)
		{
			ans[i]=(ans[i-1]*t)%s;
		}
		for (x=1;x<N;x++)
		{
			long long int k=A[x-1]*A[x-1];
			if(ans[x+1]<= r)
				A[x] = ((a*k) + (b*A[x-1]) + c)%m;
			else
				A[x] = ((d*k) + (e*A[x-1]) + f)% m;
		}
				    long long int  *st = Build_segment(A,N);
		/*for(i=0;i<N;i++)
		printf("%lld ",A[i]);
		printf("\n");
		/*for (x = 1;x<N;x++)
		{
			long long int  ans=1;
			for(i=1;i<=x+1;i++)
			{
				ans=(ans*t)%s;
			}
		long long int  k=A[x-1]*A[x-1];
			if(ans<= r)
				A[x] = ((a*k) + (b*A[x-1]) + c)%m;
			else
				A[x] = ((d*k) + (e*A[x-1]) + f)% m;
		}
		    long long int  *st = Build_segment(A,N);
	for(i=1;i<=N;i++)
		{
			printf("%lld ",A[i]);
		}
		printf("\n");
	
		long long int get_min[100][100];
		long long int **get_min;
		get_min=(long long int **)malloc(sizeof(long long int *)*(N+2));
		for(i=0;i<N;i++)
		{
			get_min[i]=(long long int *)malloc(sizeof(long long int )*(N+2));
		}
		long long int min;
		for(i=0;i<N;i++)
		{
			min=A[i];
			for(j=i;j<N;j++)
			{
				if(A[j]<min)
				{
					min=A[j];
				}
				get_min[i][j]=min;
			}
		}
		for(i=0;i<N;i++)
		printf("%d ",A[i]);
		printf("\n");*/
		long long int  sum=0,product=1;
		for (i=1;i<=Q;i++)
		{
			L1 = (La * L1 + Lc) % Lm;
			D1 = (Da * D1 + Dc) % Dm; 
			L = L1 + 1;
			if(L+K-1+D1<N)
			R=L + K - 1 + D1;
			else
			R = N;
			long long int temp,min;
			if(L>R)
			{
				temp=L;
				L=R;
				R=temp;
			}
			/*for(j=L;j<=R;j++)
			{
				if(j==L)
				{
					min=A[j];
					continue;
				}
				if(A[j]<min)
				min=A[j];
			}*/
			//printf("L= %d R=%d\n",L-1,R-1);
			min=RMQ(st, N, L-1,R-1);
			sum=sum+min;
			product=(product*min)%MOD;
			/*printf("MIN=%d\n",min);
			printf("%lld %lld\n",L,R);*/
		}
		print_sum(sum);print(product);
	//	printf("%lld %lld\n",sum,product);
    return 0;
}
long long int  Middle(long long int  s, long long int  e) {  return s + (e -s)/2;  }
long long int  Minimum(long long int  x, long long int  y) { return (x < y)? x: y; }
long long int  RangeMinimumQuery(long long int  *st, long long int  low, long long int  high, long long int  l, long long int  r, long long int  index)
{
    if (l <= low && r >= high)
        return st[index];
    if (high < l || low > r)
        return INT_MAX;
    long long int  mid = Middle(low, high);
    return Minimum(RangeMinimumQuery(st, low, mid, l, r, 2*index+1),
                  RangeMinimumQuery(st, mid+1, high, l, r, 2*index+2));
}
long long int  RMQ(long long int  *st, long long int  n, long long int  l, long long int  r)
{
    return RangeMinimumQuery(st, 0, n-1, l, r, 0);
}
long long int  SegmentTreebuild(long long int  arr[], long long int  low, long long int  high, long long int  *st, long long int  si)
{
    if (low == high)
    {
        st[si] = arr[low];
        return arr[low];
    }
    long long int  mid = Middle(low, high);
    st[si] =  Minimum(SegmentTreebuild(arr, low, mid, st, si*2+1),
                     SegmentTreebuild(arr, mid+1, high, st, si*2+2));
    return st[si];
}
long long int  *Build_segment(long long int  arr[], long long int  n)
{
    long long int  x = (long long int )(ceil(log2(n)));
    long long int  max = 2*(long long int )pow(2, x) - 1;
    long long int  *segt = new long long int [max];
    SegmentTreebuild(arr, 0, n-1, segt, 0);
    return segt;
}
