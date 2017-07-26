#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	int flag[100004]={0};
	for(int i=1;i<=100002;i++)
	{
		int num=i;
		int rev=0;
		while(num)
		{
			int p=num%10;
			rev=rev*10+p;
			num/=10;
		}
		if(rev==i)
		{
			flag[i]=1;
		}
	}
	while(t--)
	{
		long long int cnt=0;
		int a,b;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
			if(flag[i])
			{
				cnt+=i;
			}
		}
		cout<<cnt<<endl;
	}
	// your code goes here
	return 0;
}
