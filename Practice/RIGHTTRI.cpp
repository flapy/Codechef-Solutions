//Akhand Chutiyaapa KAR DIYA
#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define all(x) x.begin(),x.end()
#define init int t;t=readInt();while(t--)
#define traverse(itr)
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> pi;
typedef pair<int,pi> pii;
#define MAX INT_MAX
#define MIN INT_MIN
#define lli long long int
int readInt () {
    bool minus = false;
    int result = 0;
    char ch;
    ch = getchar();
    while (true) {
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar();
    }
    if (ch == '-') minus = true; else result = ch-'0';
    while (true) {
        ch = getchar();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus)
        return -result;
    else
        return result;
}
int main()
{
    init
    {   
        lli h,s;
        cin>>h>>s;
        double arr[3];
        double sum1=sqrt(h*h+4*s);
        //MA KI CHUT CHUTIYAPA HO GYA equal kaise bhul gya!!!!!!!!!
        if(h*h-4*s>=0)
        {
            double sum2=sqrt(h*h-4*s);
            double side1=(sum2+sum1)/2;
            double side2=2*s/side1;
            arr[0]=side1;
            arr[1]=side2;
            arr[2]=h;
            sort(arr,arr+3);
            printf("%lf ",arr[0]);
            printf("%lf ",arr[1]);
            printf("%lf\n",arr[2]);
        }
        else
            cout<<-1<<endl;
    }
    return 0;
}
