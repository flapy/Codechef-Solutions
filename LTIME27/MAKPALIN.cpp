#include <bits/stdc++.h>
    using namespace std;
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
    string s;
    cin>>s;
    int cnt=0;
    int l=s.length();
    int i,j;
    for(i=0;i<=l;i++)
    {
    for(j=0;j<26;j++)
    {
    //cout<<"hello"<<endl;
    char c=j+'a';
    string p(1, c);
    s.insert(i,p);
    //cout<<s<<endl;
    int x=0;
    bool flag=true;
    int length=l;
    while(x<=length)
    {
    if(s[x]==s[length])
    {
    length--;
    x++;
    }
    else
    {
    flag=false;
    break;
    }
    }
    s.erase(i,1);
    //cout<<s.length()<<endl;
    if(flag)
    {
    cnt++;
    break;
    }
    }
    }
    printf("%d\n",cnt);
    }
    return 0;
    }
