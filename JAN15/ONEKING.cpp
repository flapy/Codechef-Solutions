//Chirag Agarwal
    #include <vector>
    #include <algorithm>
    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    #include<math.h>
    #include<ctype.h>
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
    int main()
    {
    int t;
    t=read_int();
    while(t--)
    {
    int left,right,count=0,i=0,n;
    n=read_int();
    vector< pair<int, int> > vivacity;
    while(i<n)
	{
	i++;
    left=read_int();right=read_int();
    vivacity.push_back(make_pair(right,left));
    }
    sort(vivacity.begin(), vivacity.end());
    int sorted=vivacity[0].first;
    i=0;
    while(i<n-1)
    {
    if(sorted<vivacity[i+1].second)
    {
    count++;
    sorted=vivacity[i+1].first;
    }
    i++;
    }
    printf("%d\n",count+1);
    }
    return 0;
    }
