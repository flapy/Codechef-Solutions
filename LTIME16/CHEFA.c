#include<stdio.h>
void partition(long long int [],long long int ,long long int );
void mergeSort(long long int [],long long int ,long long int ,long long int );
long long int n;
int main()
{
	long long int array[100004],i,test;
	scanf("%lld",&test);
	while(test--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&array[i]);
		long long int c=0;
		partition(array,0,n-1);
			for(i=n-1;i>=0;i=i-2)
			{
				c+=array[i];
			}
			printf("%lld\n",c);
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
