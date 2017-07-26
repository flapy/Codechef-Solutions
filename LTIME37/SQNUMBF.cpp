#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define all(x) x.begin(),x.end()
#define init int t;t=readInt();while(t--)
#define traverse(itr)
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> pi;
typedef pair<int,pi> pii;
#define MAX INT_MAX
#define MIN INT_MIN
#define lli long long int
int readInt () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}
/*
Source : http://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/
*/
map<lli,int> m;
lli primeFactors(lli n)
{
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
     //   printf("%d ", 2);
        m[2]++;
        if(m[2]>=2)
        	return 2;
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (lli i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
          //  printf("%d ", i);
            m[i]++;
            if(m[i]>=2)
            	return i;
            n = n/i;
        }
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
    {
    	m[n]++;
    	if(m[n]>=2)
    		return n;
       // printf ("%d ", n);
    }
    return -1;
    //cout<<endl;
}
int main()
{
	init
	{
		lli a[102];
		int n=readInt();
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			lli ans=primeFactors(a[i]);
			if(ans!=-1)
			{
				printf("%lld\n",ans);
				break;
			}
		}
		m.clear();
	}	
	return 0;
}
