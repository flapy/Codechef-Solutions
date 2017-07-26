//Chirag Agarwal
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
int *X;
int cmp(const void *a, const void *b){
    int xi = *(int *)a;
    int xj = *(int *)b;
    return (X[xi] < X[xj]) ? -1 : (X[xi] > X[xj]);
}
int main(){
    int x[1004];
    int y[1004],t,n;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%d",&n);
    	int i;
    	for(i=0;i<n;i++)
    	scanf("%d %d",&x[i],&y[i]);
    	int index[n];
    	for(i = 0; i < n ; ++i){
    	    index[i]=i;
    	}
    	X = x;
    	qsort(index, n, sizeof(int), cmp);
    	for(i=0;i<n-1;++i)
    	{
    		printf("%d %d\n",index[i]+1,index[i+1]+1);
   		}
   	}
    return 0;
}
