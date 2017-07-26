#include <bits/stdc++.h>
            using namespace std;
                 #define gc getchar_unlocked
int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
            int main() {
            	// your code goes here
            	int l,r;
            	int n,m;
            	n=read_int();
            	int flag=0;
            	int i;
            	int a[n+2],arr[n+2];
            	//a=(int *)malloc(sizeof(int )*(n+1));
            	//arr=(int *)malloc(sizeof(int )*(n+1));
            	for(i=0;i<n;i++)
            	{
            		a[i]=read_int();
            	}
          		m=read_int();
            	if(n>10000)
            	{	
            		while(m--)
            		{
            			l=read_int();r=read_int();
            			int cnt[105]={0};
            			for(i=l-1;i<r;i++)
            			{
            				cnt[a[i]]++;
            			}
            			int k=0,j;
            			for(i=0;i<=100;i++)
            			{
            				for(int j=0;j<cnt[i];j++)
            				{
            					arr[k++]=i;
            				}
            			}
            			long long int sum=0,mul=0;
            			for(int i=0;i<k-1;i++)
            			{
            				mul=(arr[i+1]-arr[i])*(arr[i+1]-arr[i]);
            				sum+=mul;
            			}
            			printf("%lld\n",sum);
            		}
            		return 0;
            	}
            	    	while(m--){
        		l=read_int();r=read_int();
        		l--;
        		r--;
        		int diff=r-l+1;
        		for(i=0;i<diff;i++){
        			arr[i]=a[i+l];
        		}
        			long long int ans=0;
        		sort(arr,arr+diff);
        		for(i=0;i<diff-1;i++){
        			//mul=(arr[i+1]-arr[i])*(arr[i+1]-arr[i]);
        			ans+=((1LL*arr[i+1]-arr[i])*(1LL*arr[i+1]-arr[i]));
        		}
        		printf("%lld\n",ans);
        	}
            	return 0;
            }
