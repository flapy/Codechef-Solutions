#include<bits/stdc++.h>
    #define fr(a,n) for(long long i=a;i<n;i++)
    using namespace std;
     
    int main(){
    	ios::sync_with_stdio(0);
    	int t;long long int c,n,k,j,min,count;
    	cin>>t;
    	while(t--){
    	    count = 0;
    		cin>>n>>k;
    		vector<long long int> a(2*(n+5));
    		fr(0,n)
    		cin>>a[i];
    	    min=abs(a[0]+a[1]-k);
    		fr(0,n-1){
    			for(j=i+1;j<n;j++){
    				c=abs(a[i]+a[j]-k);
    				if(c<min)
    				{
    					min=c;
    					count=0;
    				}
    				if(min==c){
    					count++;
    				}	
    			}
    		}
    		cout<<min<<" "<<count<<endl;
    	}
    	return 0;
    }
