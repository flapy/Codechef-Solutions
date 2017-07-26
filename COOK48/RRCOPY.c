#include<stdio.h>
#include<stdlib.h>
void partition(long long int [],long long int ,long long int );
void mergeSort(long long int [],long long int ,long long int ,long long int );
int main()
{
	long long int array[100005],test;
	scanf("%lld",&test);
	while(test--)
	{
		long long int i,count=1,n;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&array[i]);
		partition(array,0,n-1);
		for(i=0;i<n-1;i++)
		{
			if(array[i]!=array[i+1])
			count++;
		}
		printf("%lld\n",count);
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
 
long long int i,m,k,l,temp[100005];
 
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
