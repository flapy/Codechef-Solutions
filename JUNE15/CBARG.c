#include<stdio.h>
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
   inline long long int inp_lo() {
    	long long int n, ch;
    	while ((ch = inchar()) < '0');
    	n = (ch - '0');
    	while ((ch = inchar()) >= '0')
    		n = (n << 3) + (n << 1) + (ch - '0');
    	return n;
    }
int main()
{
	int t,n,i;
	t=inp();
	while(t--)
	{
		long long int cur_mem,mem_all=0,mem_del=0,net_all=0,temp;
		n=inp();
		for(i=0;i<n;i++)
		{
			cur_mem=inp_lo();
			if(mem_all<cur_mem)
			{
				temp=mem_all;
				mem_all+=cur_mem-mem_all;
				net_all+=cur_mem-temp;
			}
			else
			{
				mem_del=cur_mem-mem_all;
				mem_all+=mem_del;
			}
		}
		printf("%lld\n",net_all);
	}
	return 0;
}
