#include<stdio.h>
    #include<algorithm>
    #define max(a,b) (a>=b?a:b)
    using namespace std;
    int main()
    	{
    		int t;
    		int R,G,B,M,i;
    		int r,g,b,rmax,gmax,bmax;
    		scanf("%d",&t);
    		while(t-->0)
    			{
    				rmax=gmax=bmax=0;
    				scanf("%d%d%d%d",&R,&G,&B,&M);
    				for(i=0;i<R;++i)
    					{
    						scanf("%d",&r);
    						if(r>rmax)
    							rmax=r;				
    					}	
    				for(i=0;i<G;++i)
    					{
    						scanf("%d",&r);
    						if(r>gmax)
    							gmax=r;				
    					}
    				for(i=0;i<B;++i)
    					{
    						scanf("%d",&r);
    						if(r>bmax)
    							bmax=r;				
    					}
    				R=rmax;
    				G=gmax;
    				B=bmax;
    				for(i=0;i<M;++i)
    					{
    						if(R>=G&&R>=B)
    							R/=2;
    						else if(G>=R&&G>=B)
    							G/=2;
    						else if(B>=G&&B>=R)
    							B/=2;
    					}
    				printf("%d\n",max(max(R,B),G));
    			}
    	}
