main(n,i,j,sum,calc,old) {int a[500];i=1;j=0;sum=0;scanf("%d",&n);old=n;while(1) { calc=pow(2,i);if(sum==old) break; if(calc>n) {   a[j]=pow(2,i-1);j++;n=n-pow(2,i-1);sum+=pow(2,i-1); i=1; } i++; }	for(i=j-1;i>=0;i--) printf("%d ",a[i]);}