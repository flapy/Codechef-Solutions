//Chirag Agarwal
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<iostream>
using namespace std;
//source for merge sort --http://cprogrammingcodes.blogspot.in/2012/02/merge-sorting.html
 
void mergeSort(int array[],int lower, int mid, int higher){
 
  int i,m,kapil,l,temp[100002];
 
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
void part(int array[],int lower,int higher){
 
int mider;
 
if(lower<higher){
mider=(lower+higher)/2;
part(array,lower,mider);
part(array,mider+1,higher);
mergeSort(array,lower,mider,higher);
}
}
int main()
{
int test,array[100005],j,pair,n;
scanf("%d",&test);
while(test--)
{
pair=0 ;
scanf("%d",&n);
for(j=0;j<n;j++)
scanf("%d",&array[j]);
part(array,0,n-1);
for(j=0;j<n-1;j++)
{
if(array[j]!=array[j+1])
pair++;
else
{
while(array[j]==array[j+1])
{
j++;
}
pair++;
}
}
if(array[n-1]!=array[n-2])
pair++;
printf("%d\n",pair);
}
return 0;
}
