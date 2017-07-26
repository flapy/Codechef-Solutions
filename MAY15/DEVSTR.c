#include <stdio.h>
        #include <string.h>
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
    	pc('\n');
    }
     
                #include <stdio.h>
            #include <string.h>
            void flip(char ch,char a[],long long int i)
            {
            	if(ch=='0')
            	a[i]='1';
            	else
            	a[i]='0';
            }
            int main()
            {
            	int t;
            	t=inp();
            	while(t--)
            	{
            		int i,n,k;
            		n=inp();
            		k=inp();
            		char a[100002];
            		scanf("%s",a);
            		//printf("%s\n",a);
            	//	scanf("%c",&c);
            		int p=0,q=0;
            		if(n<=k)
            		{
            			print(0);
            			printf("%s\n",a);
            		}
            		else if(k==1)
        		{
        			for(i=0;i<n;i++)
        			{
        				if(i%2==0)
        				{
        					if(a[i]!='1')
        					p++;
        				}
        				else
        				{
        					if(a[i]!='0')
        					p++;
        				}
        			}
        			for(i=0;i<n;i++)
        			{
        				if(i%2==0)
        				{
        				
        					if(a[i]!='0')
        					q++;
        				}
        				else
        				{
        				
        					if(a[i]!='1')
        					q++;
        				}
         			}
        			if(p<q)
        			{
        				for(i=0;i<n;i++)
        				{	
        					if(i%2==0)
        					{
        						a[i]='1';
        					}
        					else
        					{
        						a[i]='0';
        					}
        				}
        				print(p);
        				printf("%s\n",a);
        			}
        			else
        			{
        				for(i=0;i<n;i++)
   		     			{
        					if(i%2==0)
        					{
        						a[i]='0';
        					}
        					else
        					{
        						a[i]='1';
        					}
         				}
        				print(q);
        				printf("%s\n",a);
        			}
        		}
            		else
            		{
            			int flips=0,k1;
            			char ch;
            			for(i=0;i<n;i++)
            			{
            				if(i==0)
            				{
            					ch=a[i];
            					k1=1;
            					continue;
            				}
            				else if(ch==a[i])
            				{
            					k1++;
            					if(k1>k)
            					{
            						if(a[i]==a[i+1])
            						flip(a[i],a,i);
            						else
            						flip(a[i-1],a,i-1);
            						flips++;
        							k1=1;
            					}
            					ch=a[i];
            				}
            				else
            				{
            					ch=a[i];
            					k1=1;
            				}
            			}
            			print(flips);
            			printf("%s\n",a);
            		}
            	}
            	return 0;
        }
