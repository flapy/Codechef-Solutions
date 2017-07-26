/* package codechef; // don't place package name! */
import java.util.*;
import java.lang.*;
import java.io.*;
/* Name of the class has to be "Main" only if the class is public. */
class Chapd
{
	public static void main(String args[])
	{
		Scanner s=new Scanner(System.in);
		long test,a,b,common,left_b;
		test=s.nextLong();
		while(test-->0)
		{
			a=s.nextLong();b=s.nextLong();
			common=cal_gcd(a,b);
			left_b=b/common;		
			if(b==1)
			System.out.println("Yes");
			else if(a==1)
			System.out.println("No");
			else if(a%left_b==0 || a%b==0)
			System.out.println("Yes");
			else
			{
				boolean flag=false;
				while(true)
				{
					common=cal_gcd(left_b,common);
					left_b=left_b/common;
					if(common==1 || left_b==0)
					break;
					if(a%left_b==0)
					{
						flag=true;
						break;
					}
				}
				if(flag)
				System.out.println("Yes");
				else
				System.out.println("No");
			}
				
		}
	}
	public static long cal_gcd(long a,long b)
	{
		long temp;
  		while ( a != 0 ) {
  		   temp = a; a = b%a;  b = temp;
  		}
  		return b;
	}
}
