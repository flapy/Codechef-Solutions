#include<stdio.h>
#include<iostream>
#include<climits>
using namespace std;
 //geeksforgeeks.org function taken from!
// Prototype of a utility function to swap two integers
void swap(int *x, int *y);
 
// A class for Max Heap
class MaxHeap
{
    int *harr; // pointer to array of elements in heap
    int capacity; // maximum possible size of max heap
    int heap_size; // Current number of elements in max heap
public:
    MaxHeap(int a[], int size); // Constructor
    void maxHeapify(int i);  //To maxHeapify subtree rooted with index i
    int parent(int i) { return (i-1)/2; }
    int left(int i) { return (2*i + 1); }
    int right(int i) { return (2*i + 2); }
 
    int extractMax();  // extracts root (maximum) element
    int getMax() { return harr[0]; } // Returns maximum
 
    // to replace root with new node x and heapify() new root
    void replaceMax(int x) { harr[0] = x;  maxHeapify(0); }
};
 
MaxHeap::MaxHeap(int a[], int size)
{
    heap_size = size;
    harr = a;  // store address of array
    int i = (heap_size - 1)/2;
    while (i >= 0)
    {
        maxHeapify(i);
        i--;
    }
}
 
// Method to remove maximum element (or root) from max heap
int MaxHeap::extractMax()
{
    if (heap_size == 0)
        return INT_MAX;
 
    // Store the maximum vakue.
    int root = harr[0];
 
    // If there are more than 1 items, move the last item to root
    // and call heapify.
    if (heap_size > 1)
    {
        harr[0] = harr[heap_size-1];
        maxHeapify(0);
    }
    heap_size--;
 
    return root;
}
 
// A recursive method to heapify a subtree with root at given index
// This method assumes that the subtrees are already heapified
void MaxHeap::maxHeapify(int i)
{
    int l = left(i);
    int r = right(i);
    int largest = i;
    if (l < heap_size && harr[l] > harr[i])
        largest = l;
    if (r < heap_size && harr[r] > harr[largest])
        largest = r;
    if (largest != i)
    {
        swap(&harr[i], &harr[largest]);
        maxHeapify(largest);
    }
}
 
// A utility function to swap two elements
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
// Function to return k'th largest element in a given array
int kthSmallest(int arr[], int n, int k)
{
    // Build a heap of first k elements: O(k) time
    MaxHeap mh(arr, k);
 
    // Process remaining n-k elements.  If current element is
    // smaller than root, replace root with current element
    for (int i=k; i<n; i++)
        if (arr[i] < mh.getMax())
           mh.replaceMax(arr[i]);
 
    // Return root
    return mh.getMax();
} 
#define gc getchar_unlocked
int read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
}
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
	int a[100005],index=0,m,q;
	m=read_int();
	while(m--)
	{
		q=read_int();
		if(q==0)
		{
			int x;
			x=read_int();
			a[index]=x;
			index++;
		}
		else if(q==1)
		{
			int l,r,x,i,xo,max,element;
			l=read_int();
			r=read_int();
			x=read_int();
			for(i=l-1;i<r;i++)
			{		
				xo=x^a[i];
				if(i==l-1)
				{
					max=xo;
					element=a[i];
				}
				else
				{
					if(xo>max)
					{
						max=xo;
						element=a[i];
					}
				}
			}
			printf("%d\n",element);
		}
		else if(q==2)
		{
			int k;
			k=read_int();
			index=index-k;
		}
		else if(q==3)
		{
			int i,l,r,cnt=0,x;
			l=read_int();r=read_int();x=read_int();
			for(i=l-1;i<r;i++)
			{
				if(a[i]<=x)
				cnt++;
			}
			printf("%d\n",cnt);
		}
		else if(q==4)
		{
			int i,l,r,x,j=0,arr[100005];
			l=read_int();r=read_int();x=read_int();
			for(i=l-1;i<r;j++,i++)
			{
				arr[j]=a[i];
			}
			int p=kthSmallest(arr, j, x);
			printf("%d\n",p);
		}
	}
	return 0;
}
