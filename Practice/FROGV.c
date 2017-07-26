#include<stdio.h>
#include<stdlib.h>
void partition(long long int [],long long int ,long long int );
void mergeSort(long long int [],long long int ,long long int ,long long int );
int main()
{
	long long int n,i,k,p,array[100005],b[100005],sorted[100005],c,d,c1,c2,count=0,j,m,q,max,min,mid,l,u;
	scanf("%lld %lld %lld",&n,&k,&p);
	
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&array[i]);
		sorted[i]=array[i];
	}
		partition(array,1,n);
	for(i=1;i<n;i++)
	{
	   	if((array[i+1]-array[i])<=k)
	   	{
	   		b[i]=count;
	   		b[i+1]=count;
	   	}
	   	else
	   	{
	   	count++;
	   	b[i+1]=count;
	   }
	}
	while(p--)
	{
			long long int p1,p2,i1,i2;
			scanf("%lld %lld",&p1,&p2);
			i1=sorted[p1];
			i2=sorted[p2];
				long long int first,last,middle,pos1,pos2;
				first = 0;
 				last = n ;
 				 middle = (first+last)/2;
 				 while( first <= last )
   					{
    					  if (array[middle] < i1 )
         				  first = middle + 1;    
      					  else if (array[middle] ==i1) 
      					  {
      					 	  pos1=middle;
        					  break;
      					  } 
      					  else
        				  last = middle - 1;
  						   middle = (first + last)/2;
   				    }	
				    first = 0;
            last = n;
     		middle = (first+last)/2;
   			while( first <= last )
   			{
    			  if (array[middle] <i2)
        			 first = middle + 1;    
      			  else if (array[middle] ==i2) 
      		      {
      				   pos2=middle;
        			   break;
      			  } 
                  else
                     last = middle - 1;
 
                  middle = (first + last)/2;
            }
        
            if(b[pos1]==b[pos2])
            		printf("Yes\n");
            	else
            		printf("No\n");
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
