#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265
int main() {
	// your code goes here
	int id;
	cin>>id;
	int t;
	cin>>t;
	while(t--)
	{
		double x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		double d1=sqrt((double)(x2-x1)*(x2-x1)+(double)(y2-y1)*(y2-y1));
		double d2=sqrt((float)(x3-x1)*(x3-x1)+(double)(y3-y1)*(y3-y1));
		double d3=sqrt((double)(x2-x3)*(x2-x3)+(double)(y2-y3)*(y2-y3));
		if(abs(d1-d2)<.000001 || abs(d3-d2)<.000001 || abs(d1-d3)<.000001)
		{
			if(id==1)
			cout<<"Isosceles triangle\n";
			else
			{
				double param=((d1*d1)+(d2*d2)-(d3*d3))/(2*d1*d2);
				  double result1 = acos (param) * 180.0 / PI;
				  param=((d1*d1)+(d3*d3)-(d2*d2))/(2*d1*d3);
				  double result2 = acos (param) * 180.0 / PI;
				  param=((d3*d3)+(d2*d2)-(d1*d1))/(2*d2*d3);
				  double result3 = acos (param) * 180.0 / PI;
				  if(abs(result1-90.000000)<.000001 || abs(result2-90.000000)<.000001 || abs(result3-90.000000)<.000001)
				  cout<<"Isosceles right triangle\n";
				  else if(result1>90.000000 || result2>90.000000 || result3>90.000000)
				  cout<<"Isosceles obtuse triangle\n";
				  else
				  cout<<"Isosceles acute triangle"<<endl;
			}
		}
		else
		{
			if(id==1)
			cout<<"Scalene triangle\n";
			else
			{
				  double param=((d1*d1)+(d2*d2)-(d3*d3))/(2*d1*d2);
				  double result1 = acos (param) * 180.0 / PI;
				  param=((d1*d1)+(d3*d3)-(d2*d2))/(2*d1*d3);
				  double result2 = acos (param) * 180.0 / PI;
				  param=((d3*d3)+(d2*d2)-(d1*d1))/(2*d2*d3);
				  double result3 = acos (param) * 180.0 / PI;
				  if(abs(result1-90.000000)<.000001 || abs(result2-90.000000)<.000001 || abs(result3-90.000000)<.000001)
				  cout<<"Scalene right triangle\n";
				  else if(result1>90.000000 || result2>90.000000 || result3>90.000000)
				  cout<<"Scalene obtuse triangle\n";
				  else
				  cout<<"Scalene acute triangle"<<endl;
			}
		}
	}
	return 0;
}
