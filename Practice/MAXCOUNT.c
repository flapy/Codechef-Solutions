#include<stdio.h>
int n;
void partition(int [],int ,int );
void mergeSort(int [],int ,int ,int );
int main()
{
	int t,a[10000];
	scanf("%d",&t);
	while(t--)
	{
		int cnt=1,pos=0,max=1,i;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		partition(a,0,n-1);
		/*for(i=0;i<n;i++)
		printf("%d ",a[i]);
		printf("\n");*/
		
		for(i=1;i<n;i++)
		{
			if(a[i]==a[i-1])
			{
				cnt++;
				if(cnt>max)
				{
					pos=i;
					max=cnt;
				}
			}
			else	
			{	
				cnt=1;
			}
		}
		printf("%d %d\n",a[pos],max);		
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
