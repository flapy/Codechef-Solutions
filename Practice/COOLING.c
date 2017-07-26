#include<stdio.h>
int n;
void partition(int [],int ,int );
void mergeSort(int [],int ,int ,int );
int main()
{
	int t,cnt,i,j;
	scanf("%d",&t);
	while(t--)
	{
		int a[31],b[31];
		cnt=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		scanf("%d\n",&b[i]);
		partition(b,0,n-1);
		partition(a,0,n-1);
		for(i=0,j=0;i<n && j<n;j++)
		{
			if(a[i]<=b[j])
			{
				i++;
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}
void partition(int arr[],int low,int high){
 
int mid;
 
if(low<high){
mid=(low+high)/2;
partition(arr,low,mid);
partition(arr,mid+1,high);
mergeSort(arr,low,mid,high);
}
}
 
void mergeSort(int arr[],int low,int mid,int high){
 
int i,m,k,l,temp[n];
 
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
