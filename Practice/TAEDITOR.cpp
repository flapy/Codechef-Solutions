#include <bits/stdc++.h>
        using namespace std;
        char scan_str[300005],ch;
        string ori,str,f;
        int t,pos,e;
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
        	//ios_base::sync_with_stdio(false);
          	t=read_int();
        	ori="";
        	while(t--)
        	{
        		scanf(" %c",&ch);
        		if(ch=='+')
        		{
        			pos=read_int();
        			scanf("%s",scan_str);
        			str=scan_str;
        		  	ori.insert(pos,str);
        		}
        		else
        		{
        			pos=read_int();
        			e=read_int();
        			f=ori.substr(pos-1,e);
        			printf("%s\n",f.c_str());
        			//cout<<ori.substr(pos-1,e)<<endl;
        		}
        	}
        	return 0;
        }
