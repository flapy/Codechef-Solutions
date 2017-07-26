#include<stdio.h>
    #include<stdlib.h>
    void partition(int [],int ,int );
    void mergeSort(int [],int ,int ,int );
    int n;
    int main()
    {
    int i,t,k,x,p;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
            	scanf("%d",&k);
p=a[k-1];
    partition(a,0,n-1);
    for(i=0;i<n;i++)
    {
		if(a[i]==p)
		{
		    	x=i+1;
		    	break;
	    }
	}
	printf("%d\n",x);
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
