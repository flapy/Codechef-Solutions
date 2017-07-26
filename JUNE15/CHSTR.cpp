#include<bits/stdc++.h>
                                    using namespace std;
                                                #define pc putchar_unlocked
                                        #define inchar getchar_unlocked
                                            inline int inp() {
                                        	int n, ch;
                                        	while ((ch = inchar()) < '0');
                                        	n = (ch - '0');
                                        	while ((ch = inchar()) >= '0')
                                        		n = (n << 3) + (n << 1) + (ch - '0');
                                        	return n;
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
                                 
                                /*  Modular Multiplicative Inverse
                                    Using Euler's Theorem
                                    a^(phi(m)) = 1 (mod m)
                                    a^(-1) = a^(m-2) (mod m) */
                                long long InverseEuler(int n, int MOD)
                                {
                                    return pow(n,MOD-2,MOD);
                                }
                                long long C(int n, int r, int MOD)
                                {
                                    vector<long long> f(n + 1,1);
                                    for (int i=2; i<=n;i++)
                                        f[i]= (f[i-1]*i) % MOD;
                                    return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
                                }
                                    int main()
                                    {
                                    	int j,t,n,k,i,size,p=0,q;
                                    	t=inp();
                                    	while(t--)
                                    	{
                                    		//string all[1005];
                                    		string s,temp="";
                                    		map<string,int> m;
                                    		n=inp();
                                    		k=inp();
                                    		cin>>s;
                                    		for(i=0;i<n;i++)
                                    		{
                                    			temp="";
                                    			for(j=i;j<n;j++)
                                    			{
                                    				temp+=s[j];
                                    				//temp.push_back(s[j]);
                                    				m[temp]++;
                                    				//all[p++]=temp;
                                    			}
                                    		}
                                    		int r=0;
                                    		vector<int> v;
                                    		map<string,int> :: iterator j;
                                    		int arr[1000005];
                                    		for(j=m.begin();j!=m.end();j++)
                                    		{
                                    			arr[r++]=j->second;
                                    		    //cout<<j->first;
                                    		    //printf("%d\n",j->second);
                                    		    //rev[j->second]=j->first;
                                    		}
                                    		sort(arr,arr+r);
                                    		long long sum[5006];
                                    		for(i=0;i<=n;i++)
                                    		{
                                    		    sum[i]=0;
                                    		}
                                    		long long pre_cal[505][505];
                                    		for(int i=0;i<=n;i++)
                                    		{
                                    		    for(int j=0;j<=n;j++)
                                    		    {
                                    		        pre_cal[i][j]=0;
                                    		    }
                                    		}
                                    		//i=n AND j=r;
                                    		for(int k1=1;k1<=n;k1++)
                                    		{
                                    			//sum[k1]=0;
                                    			int o;
                                    			for(o=r-1;o>=0;o--)
                                    			{
                                    			    //printf("values are %d %d\n",arr[o],k1);
                                    			    if(arr[o]<k1)
                                    			    {
                                    			        break;
                                    			    }
                                    			    else 
                                    			    {
                                    			        // printf("values are %d %d\n",arr[o],k1);
                                    			        if(pre_cal[arr[o]][arr[o]-k1]==0)
                                    			        {
                                    			            long long res=C(arr[o],k1,1000000007);
                                    			            sum[k1]=(sum[k1]+res)%1000000007;
                                    			            pre_cal[arr[o]][k1]=pre_cal[arr[o]][arr[o]-k1]=res;
                                    			        //    printf("value if matri is %ld\n",pre_cal[arr[o]]);
                                    			        }
                                    			         else
                                    			         {
                                    			        sum[k1]=(sum[k1]+pre_cal[arr[o]][arr[o]-k1])%1000000007;
                                    			        //printf("value taken is %ld\n",pre_cal[arr[o]][arr[o]-k1]);
                                    			     }  }
                                    			}
                                    		}
                                    		while(k--)
                                    		{
                                    			q=inp();
                                    			if(q>n)
                                    			{
                                    				printf("0\n");
                                    				continue;
                                    			}
                                    			println(sum[q]);
                                    		}
                                    	}
                                    	return 0;
                                    }
