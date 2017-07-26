#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
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
int main()
{
	int t;
	t=readInt();
	int a[1003];
	while(t--)
	{
		int n;
		n=readInt();
		for(int i=0;i<n;i++)
			a[i]=readInt();
		bool flag;
		int ans=0;
		int b[1002];
		for(int st1=0;st1<n;st1++)
		{
			for(int end1=st1;end1<n;end1++)
			{
				flag=false;
				int cnt=0;
				int k=0;
				for(int i=st1;i<=end1;i++)
				{
					b[k++]=a[i];
				}
				sort(b,b+k);
				for(int st2=end1+1;st2<n;st2++)
				{
					if((!binary_search(b,b+k,a[st2])))
					{
						cnt++;
					}
					else
					{
						ans+=cnt+(((cnt)*(cnt-1))/2);
						cnt=0;
					}
				}
				ans+=cnt+(((cnt)*(cnt-1))/2);
			}	
		}
		printf("%d\n",ans);
	}
	return 0;
}
