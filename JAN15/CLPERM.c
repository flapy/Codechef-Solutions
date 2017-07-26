#include<stdio.h>
  #define gc getchar_unlocked
long long int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
//source for merge sort --http://cprogrammingcodes.blogspot.in/2012/02/merge-sorting.html
 
void mergeSort(long long int array[],long long int lower, long long int mid,long long int higher){
 
long long int i,m,kapil,l,temp[100002];
 
l=lower;
i=lower;
m=mid+1;
 
while((l<=mid)&&(m<=higher)){
 
if(array[l]<=array[m]){
temp[i]=array[l];
l++;
}
else{
temp[i]=array[m];
m++;
}
i++;
}
 
if(l>mid){
for(kapil=m;kapil<=higher;kapil++){
temp[i]=array[kapil];
i++;
}
}
else{
for(kapil=l;kapil<=mid;kapil++){
temp[i]=array[kapil];
i++;
}
}
for(kapil=lower;kapil<=higher;kapil++){
array[kapil]=temp[kapil];
}
}       
void part(long long int array[],long long int lower,long long int higher){
 
long long int mider;
 
if(lower<higher){
mider=(lower+higher)/2;
part(array,lower,mider);
part(array,mider+1,higher);
mergeSort(array,lower,mider,higher);
}
}
int main()
{
	long long int t=read_int();
	while(t--)
	{
		long long int n,k,i,a[100005],sum,calc,ans;
		n=read_int();k=read_int();
		if(k==0)
		{
			sum=(n*(n+1))/2;
	    	if((sum%2==0))
	    		printf("Chef\n");
	    	else
	    		printf("Mom\n");
	    		continue;
		}
		long long int pos=0;
		for(i=0;i<k;i++)
		{
			a[i]=read_int();
			pos+=a[i];
		}
		part(a,0,k-1);
		int flag=1;
		for(i=0;i<k;i++)
		{
			if(i==0)
			{
				sum=a[i];
				calc=((a[i]-1)*(a[i]))/2;
				if(calc>=a[i])
				{
				    continue;
				}
				else
				{
				    flag=0;
					ans=calc;
					break;
				}
			}
			else
			{
				calc=((a[i]-1)*(a[i]))/2-sum;
				sum+=a[i];
				if(calc>=a[i])
				{
					continue;
				}
				else
				{
				    flag=0;
					ans=calc;
					break;
				}
			}
		}
				//printf("%d\n",ans);
        if(flag)
        {
            ans=(n*(n+1))/2-pos;
        }
		if((ans%2)==0)
	    printf("Chef\n");
	    else
	    printf("Mom\n");
		
	}
	return 0;
}
