#include <stdio.h>
    //Chirag Agarwal
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
    int main(void)
    {
    // your code goes here
      int n,m,q,i,j,x,y;
    char s[100005];
    n=read_int();m=read_int();
    scanf("%s",s);
    //printf("%s",s);
    while(m--)
    {
    q=read_int();
    if(q==1)
    {
    x=read_int();y=read_int();
    char dig = (char)(((int)'0')+y);
    s[x-1]=dig;
    //printf("%s\n",s);
    }
    else if(q==2)
    {
    x=read_int();y=read_int();
      int cnt=0,ans;
    //printf("\n");
    for(i=x-1;i<y-1;i++)
    {
      int sum=s[i]-48;
      if(sum%3==0)
      cnt++;
    //printf("%d",sum);
    for(j=i+1;j<y;j++)
    {
    // printf("%d",s[j]-48);
    sum=sum+(s[j]-48);
    if(sum%3==0)
    cnt++;
    }
    //printf("\n");
    }
    if((s[i]-48)%3==0)
    cnt++;
    printf("%d\n",cnt);
    }
    }
    return 0;
    }
