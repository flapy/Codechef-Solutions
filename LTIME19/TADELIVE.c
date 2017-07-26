//Chirag Agarwal
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
//source for merge sort --http://cprogrammingcodes.blogspot.in/2012/02/merge-sorting.html
 
void mergeSort(long long int  array[],long long int  lower, long long int  mid, long long int  higher){
 
  long long int  i,m,kapil,l,temp[100002];
 
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
void part(long long int  array[],long long int  lower,long long int  higher){
 
long long int  mider;
 
if(lower<higher){
mider=(lower+higher)/2;
part(array,lower,mider);
part(array,mider+1,higher);
mergeSort(array,lower,mider,higher);
}
}
long long int  main()
{
	 long long int  n,a[100005],b[100005],x,y,i;
	scanf("%lld %lld %lld",&n,&x,&y);
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	for(i=0;i<n;i++)
	scanf("%lld",&b[i]);
	 long long int  sum1=0,sum2=0;
	//long long int  max=x>y?x:y;
	 long long int  k=0,p=0,xcantake[100005],ycantake[100005];
	for(i=0;i<n;i++)
	{
		//if(order_x+order_y==n)
		//break;
		/*if(order_y==y && order_x<x)
		{
			order_x++;
			sum1+=a[i];
			continue;
		}
		if(order_x==x && order_y<y)
		{
			order_y++;
			sum1+=b[i];
			continue;
		}*/
		if(a[i]>=b[i])
		{
			xcantake[k]=a[i];
			k++;
		}
		else
		{
			ycantake[p]=b[i];
			p++;
		}
	}
	part(ycantake,0,p-1);
	part(xcantake,0,k-1);
	long long int  calc=0,total;
	for(i=p-1;;i--)
	{
		sum1+=ycantake[i];
		calc++;
		if(calc==y)
		break;
	}
	//prlong long int f("1%d\n",sum1);
	calc=0;
	for(i=k-1;;i--)
	{
		sum2+=xcantake[i];
		calc++;
		if(calc==n-y)
		break;
	}
	long long total1=sum1+sum2;
	long long int total2=0;
	//prlong long int f("1%d\n",sum1);
	calc=0,sum1=0,sum2=0;
	for(i=k-1;;i--)
	{
		sum1+=xcantake[i];
		calc++;
		if(calc==x)
		break;
	}
	calc=0;
	for(i=p-1;;i--)
	{
		sum2+=ycantake[i];
		calc++;
		if(calc==n-x)
		break;
	}
	total2=sum1+sum2;
	long long int max=total1>=total2?total1:total2;
	printf("%lld\n",max);
	return 0;
}
