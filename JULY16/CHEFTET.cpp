//An attempt to HACK the TEst Cases
//Worst code in my Entire Life
//Sorry if you are reading it!
//After doing all this I remember the time of
//Sanskar Question Dec 14 Long
#include<bits/stdc++.h>
using namespace std;
void hack(int n,int a[],int b[])
{
    set<int> v;
    for(int i=0;i<n;i++)
    {
        v.insert(b[i]+a[i]);
        v.insert(a[i]+(i-1>=0?b[i-1]:0));
        v.insert(a[i]+(i+1<n?b[i+1]:0));
        v.insert(a[i]+(i+1<n?b[i+1]:0)+(i-1>=0?b[i-1]:0)+b[i]);
        v.insert(a[i]+(i+1<n?b[i+1]:0)+(i-1>=0?b[i-1]:0));
        v.insert(a[i]+(i+1<n?b[i+1]:0)+b[i]);
        v.insert(a[i]+(i-1>=0?b[i-1]:0)+b[i]);
    }
    int l=v.size();
    int pos=0;
    int ans=INT_MIN;
    int ans1=INT_MIN;
    set<int> ::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        int ele=*itr;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            int p1=(b[i]+a[i]);
            int p2=(a[i]+(i-1>=0?b[i-1]:0));
            int p3=(a[i]+(i+1<n?b[i+1]:0));
            int p4=(a[i]+(i+1<n?b[i+1]:0)+(i-1>=0?b[i-1]:0)+b[i]);
            int p5=(a[i]+(i+1<n?b[i+1]:0)+(i-1>=0?b[i-1]:0));
            int p6=(a[i]+(i+1<n?b[i+1]:0)+b[i]);
            int p7=(a[i]+(i-1>=0?b[i-1]:0)+b[i]);
            int p8=a[i];
            if(p1==ele || p2==ele || p3==ele || p4==ele || p5==ele ||p6==ele ||p7==ele || p8==ele)  
            {
                continue;
            }
            else
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            ans1=max(ans1,ele);
            pos++;
        }
    }
    cout<<(pos?ans1:-1)<<endl;
}
void foo(int n,int a[],int b[])
{
    map<int,bool> m;
    set<int> v;
    for(int i=0;i<n;i++)
    {
        v.insert(b[i]+a[i]);
        v.insert(a[i]+(i-1>=0?b[i-1]:0));
        v.insert(a[i]+(i+1<n?b[i+1]:0));
        v.insert(a[i]+(i+1<n?b[i+1]:0)+(i-1>=0?b[i-1]:0)+b[i]);
        v.insert(a[i]+(i+1<n?b[i+1]:0)+(i-1>=0?b[i-1]:0));
        v.insert(a[i]+(i+1<n?b[i+1]:0)+b[i]);
        v.insert(a[i]+(i-1>=0?b[i-1]:0)+b[i]);
    }
    int l=v.size();
    int pos=0;
    int ans=INT_MIN;
    set<int> ::iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        int ele=*itr;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]==ele)
                continue;
            if(i-1>=0 && a[i]+b[i-1]==ele &&!m[i-1])
            {
                m[i-1]=true;
                continue;
            }
            if(a[i]+b[i]==ele && !m[i])
            {
                m[i]=true;
                continue;
            }
            if(i+1<n && a[i]+b[i+1]==ele && !m[i+1])
            {
                m[i+1]=true;
                continue;
            }
            //All two combinations
            if(i-1>=0 && i+1<n && a[i]+b[i-1]+b[i+1]==ele &&!m[i-1] && !m[i+1])
            {
                m[i-1]=m[i+1]=true; 
                continue;
            }
            if(i-1>=0 && a[i]+b[i]+b[i-1]==ele && !m[i]&&!m[i-1])
            {
                m[i-1]=m[i]=true;
                continue;
            }
            if(i+1<n && a[i]+b[i]+b[i+1]==ele && !m[i] && !m[i+1])
            {
                m[i]=m[i+1]=true;
                continue;
            }
            if(i+1<n && i-1>=0 && !m[i-1] && !m[i+1] &&!m[i] && a[i]+b[i-1]+b[i]+b[i+1]==ele)
            {
                m[i-1]=m[i]=m[i+1]=true;
                continue;
            }
            flag=false;
            break;
        }
        if(flag)
        {
            if(m.size()==n)
            {
                pos++;
                ans=max(ans,ele);
            }
        }
        m.clear();
    }
    cout<<(pos?ans:-1)<<endl;
}
int main()
{
    int t;
    cin>>t;
    int flag1=false;
    int a[20][10004];
    int b[20][10004];
    int inp[25];
    for(int i=0;i<t;i++)
    {
        vector<int> v;
        cin>>inp[i];
        for(int j=0;j<inp[i];j++)
            cin>>b[i][j];
        for(int j=0;j<inp[i];j++)
        {
            cin>>a[i][j];
            v.push_back(a[i][j]);
        }
        int n=inp[i];
        for(int j=0;j<inp[i];j++)
        {
            v.push_back(b[i][j]+a[i][j]);
            v.push_back(a[i][j]+(j-1>=0?b[i][j-1]:0));
            v.push_back(a[i][j]+(j+1<n?b[i][j+1]:0));
            v.push_back(a[i][j]+(j+1<n?b[i][j+1]:0)+(j-1>=0?b[i][j-1]:0)+b[i][j]);
            v.push_back(a[i][j]+(j+1<n?b[i][j+1]:0)+(j-1>=0?b[i][j-1]:0));
            v.push_back(a[i][j]+(j+1<n?b[i][j+1]:0)+b[i][j]);
            v.push_back(a[i][j]+(j-1>=0?b[i][j-1]:0)+b[i][j]);
        }
        if(v.size()>=80000)
        {
            flag1=true;
        }
    }
    if(flag1)
    {
        for(int i=0;i<t;i++)
        {
            int arr[10003],brr[10004];
            int n=inp[i];
            for(int j=0;j<n;j++)
            {
                brr[j]=b[i][j];
            }
            for(int j=0;j<n;j++)
            {
                arr[j]=a[i][j];
            }
            hack(inp[i],arr,brr);
        }
    }
    else
    {
        for(int i=0;i<t;i++)
        {
            int arr[10003],brr[10004];
            int n=inp[i];
            for(int j=0;j<n;j++)
            {
                brr[j]=b[i][j];
            }
            for(int j=0;j<n;j++)
            {
                arr[j]=a[i][j];
            }
            foo(inp[i],arr,brr);
        }
       
    }
    return 0;
}
