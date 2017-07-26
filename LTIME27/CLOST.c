#include<stdio.h>
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
    int main() {
    // your code goes here
    int t;
    t=read_int();
    while(t--)
    {
    int n;
    n=read_int();
    int q;
    q=read_int();
    int a,b,i;
    char s[2005];
    s[n]='\0';
    for(i=0;i<n;i++)
    s[i]='#';
    while(q--)
    {
    int flag=0;
    a=read_int();
    b=read_int();
    for(i=a;i<=b;i++)
    {
    if(!flag)
    {
    s[i]='(';
    flag++;
    }
    else
    {
    s[i]=')';
    flag=0;
    }
    }
    }
    for(i=0;i<n;i++)
    {
    if(s[i]=='#')
    s[i]='(';
    }
   printf("%s\n",s);
    }
    return 0;
    }
