#include<stdio.h>
long long int gcd(long long int n, long long int m)
{
	long long int g, remainder;
 
	while (n != 0)
	{
		remainder = m % n;
		m = n;
		n = remainder;
	}
 
	g = m;
 
	return g;
}
void partition(long long int [],long long int ,long long int );
void mergeSort(long long int [],long long int ,long long int ,long long int );
int main()
{
	long long int array[100000],test,n;
	scanf("%lld",&test);
	while(test--)
	{
		int f=0;
		long long int i;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&array[i]);
		partition(array,0,n-1);
		long long int j,ans;
		for(i=0;i<n-1;i++)
		{
				ans=gcd(array[i],array[i+1]);
				if(ans==1)
				{
					f=1;
					break;
				}
		}
		if(f==0)
		printf("-1\n");
		else
		printf("%lld\n",n);
	}
	return 0;
} 
void partition(long long int arr[],long long int low,long long int high){
 
long long int mid;
 
if(low<high){
mid=(low+high)/2;
partition(arr,low,mid);
partition(arr,mid+1,high);
mergeSort(arr,low,mid,high);
}
}
 
void mergeSort(long long int arr[],long long int low,long long int mid,long long int high){
 
long long int i,m,k,l,temp[100002];
 
l=low;
i=low;
m=mid+1;
 
while((l<=mid)&&(m<=high)){
 
if(arr[l]<=arr[m]){
temp[i]=arr[l];
l++;
}
else{
temp[i]=arr[m];
m++;
}
i++;
}
 
if(l>mid){
for(k=m;k<=high;k++){
temp[i]=arr[k];
i++;
}
}
else{
for(k=l;k<=mid;k++){
temp[i]=arr[k];
i++;
}
}
for(k=low;k<=high;k++){
arr[k]=temp[k];
}
}
