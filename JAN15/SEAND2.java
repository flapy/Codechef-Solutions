import java.io.*;
import java.util.Arrays;
import java.util.Arrays;
import java.util.Scanner;
import java.util.*;
import java.math.BigInteger;
class Seraja
{
	public static void main(String args[])
	{
		int t,i,j;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		for(i=0;i<t;i++)
		{
			String num=s.next();
			StringBuffer rev=new StringBuffer(num);
			rev.reverse();
			String rever=rev.toString();
			//System.out.println(rev);
			int n;
			n=s.nextInt();
			int l;
			l=num.length();
			String original = num;
			char[] chars = original.toCharArray();
			Arrays.sort(chars);
			String sorted = new String(chars);
			int k;
			int h=chars.length-1,p;			
			String descen="";
			for(p=h;p>=0;p--)
			{
				descen=descen+chars[p];
			}
			BigInteger sum1=new BigInteger("0");
			BigInteger sum2=new BigInteger("0");
			BigInteger sum3=new BigInteger("0");
			BigInteger sum4=new BigInteger("0");
			BigInteger bi1=new BigInteger(num);
			BigInteger bi2=new BigInteger(sorted);
			BigInteger bi3=new BigInteger(rever);
			BigInteger bi4=new BigInteger(descen);
			BigInteger ans1=new BigInteger("1");
			BigInteger ans2=new BigInteger("1");
			BigInteger ans3=new BigInteger("1");
			BigInteger ans4=new BigInteger("1");
			//System.out.println(sorted);
			int ans;
			for(j=0;j<n;j++)
			{
				k=s.nextInt();
				String s1=""+k;
				BigInteger mo=new BigInteger(s1);
				ans1=bi1.mod(mo);
				sum1=sum1.add(ans1);
				ans2=bi2.mod(mo);
				sum2=sum2.add(ans2);
				ans3=bi3.mod(mo);
				sum3=sum3.add(ans3);
				ans4=bi4.mod(mo);
				sum4=sum4.add(ans4);
			}
			int res;
			res=sum1.compareTo(sum2);
			if(res<0)
			{
				int k2=sum1.compareTo(sum3);
				if(k2<0)
				ans=1;
				else
				ans=3;	
			}
			else if(res>0)
			{
				int x=sum2.compareTo(sum3);
				if(x<0)
				ans=2;
				else
				ans=3;
			}
			else
			{
				int x1=sum2.compareTo(sum3);
				if(x1<0)
				ans=2;
				else
				ans=3;	
			}
			if(ans==1)
			{
				int g=sum1.compareTo(sum4);
				if(g<0)
				{
					System.out.println(num);
				}
				else
				{
					System.out.println(descen);
				}
			}
			else if(ans==2)
			{
				int b=sum2.compareTo(sum4);
				if(b<0)
				{
					System.out.println(sorted);
				}
				else
				System.out.println(descen);
			}
			else if(ans==3)
			{
				int z=sum3.compareTo(sum4);
				if(z<0)
				System.out.println(rever);
				else
				System.out.println(descen);
			}
			
 
		}
	}
}
