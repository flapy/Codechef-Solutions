#include<stdio.h>
void partition(long long int [],long long int ,long long int );
void mergeSort(long long int [],long long int ,long long int ,long long int );
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int m,n,cnt=1,i,j,p;
		char plank[100003];
		long long int a[100003];
		scanf("%lld %lld",&n,&m);
		for(i=0;i<n;i++)
		plank[i]='w';
		char ch;
		for(i=0;i<m;i++)
		{
			scanf(" %c %d",&ch,&p);
			a[i]=p;
			//printf("%c",ch);
			plank[p-1]=ch;
		}
		partition(a,0,m-1);
		for(i=1;i<m;i++)
		{
			if(plank[a[i]-1]!=plank[a[i-1]-1])
			cnt=(cnt*(a[i]-a[i-1]))%1000000009;
		}
		printf("%lld\n",cnt);
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
