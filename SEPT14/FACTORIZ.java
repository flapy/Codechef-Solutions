import java.math.BigInteger;
import java.util.Scanner;
import java.util.*;
import java.lang.*;
import java.io.*;
class TryFinal
{
	public static void main(String args[])
	{
	Scanner s=new Scanner(System.in);
	int t;
	t=s.nextInt();
	for(int i=0;i<t;i++)
	{
		String num=s.next();
		BigInteger bi=new BigInteger(num);
		BigInteger z=new BigInteger("0");
		BigInteger b1458=new BigInteger("1458");
		BigInteger b729=new BigInteger("729");
		BigInteger b243=new BigInteger("243");
		BigInteger b81=new BigInteger("81");
		BigInteger b27=new BigInteger("27");
		BigInteger b9=new BigInteger("9");
		BigInteger b3=new BigInteger("3");
		BigInteger b64=new BigInteger("64");
		BigInteger b32=new BigInteger("32");
		BigInteger b16=new BigInteger("16");
		BigInteger b8=new BigInteger("8");
		BigInteger b4=new BigInteger("4");
		BigInteger b2=new BigInteger("2");
		BigInteger ans1458=new BigInteger("0");
		BigInteger ans729=new BigInteger("0");
		BigInteger ans243=new BigInteger("0");
		BigInteger ans81=new BigInteger("0");
		BigInteger ans27=new BigInteger("0");
		BigInteger ans9=new BigInteger("0");
		BigInteger ans3=new BigInteger("0");
		BigInteger ans64=new BigInteger("0");
		BigInteger ans32=new BigInteger("0");
		BigInteger ans16=new BigInteger("0");
		BigInteger ans8=new BigInteger("0");
		BigInteger ans4=new BigInteger("0");
		BigInteger ans2=new BigInteger("0");
		ans64=bi.mod(b64);
		ans32=bi.mod(b32);
		ans16=bi.mod(b16);
		ans8=bi.mod(b8);
		ans4=bi.mod(b4);
		ans2=bi.mod(b2);
		ans1458=bi.mod(b1458);
		ans729=bi.mod(b729);
		ans243=bi.mod(b243);
		ans27=bi.mod(b27);
		ans81=bi.mod(b81);
		ans9=bi.mod(b9);
		ans3=bi.mod(b3);
		if(ans64.compareTo(z)==0)
		{
			System.out.println("7");
			for(int j=0;j<6;j++)
			System.out.println("2");
			bi=bi.divide(b64);
			System.out.println(bi.toString());
		}
		else if(ans1458.compareTo(z)==0)
		{
			System.out.println("8");
			for(int j=0;j<7;j++)
			System.out.println("3");
			bi=bi.divide(b1458);
			System.out.println(bi.toString());
		}
		else if(ans32.compareTo(z)==0)
		{
			System.out.println("6");
			for(int j=0;j<5;j++)
			System.out.println("2");
			bi=bi.divide(b32);
			System.out.println(bi.toString());
		}
		else if(ans729.compareTo(z)==0)
		{
			System.out.println("7");
			for(int j=0;j<6;j++)
			System.out.println("3");
			bi=bi.divide(b729);
			System.out.println(bi.toString());
		}
		else if(ans16.compareTo(z)==0)
		{
			System.out.println("5");
			for(int j=0;j<4;j++)
			System.out.println("2");
			bi=bi.divide(b16);
			System.out.println(bi.toString());
		}
		else if(ans243.compareTo(z)==0)
		{
			System.out.println("6");
			for(int j=0;j<5;j++)
			System.out.println("3");
			bi=bi.divide(b243);
			System.out.println(bi.toString());
		}
		else if(ans8.compareTo(z)==0)
		{
			System.out.println("4");
			for(int j=0;j<3;j++)
			System.out.println("2");
			bi=bi.divide(b8);
			System.out.println(bi.toString());
		}
		else if(ans81.compareTo(z)==0)
		{
			System.out.println("5");
			for(int j=0;j<4;j++)
			System.out.println("3");
			bi=bi.divide(b81);
			System.out.println(bi.toString());
		}
		else if(ans4.compareTo(z)==0)
		{
			System.out.println("3");
			for(int j=0;j<2;j++)
			System.out.println("2");
			bi=bi.divide(b4);
			System.out.println(bi.toString());
		}
		else if(ans27.compareTo(z)==0)
		{
			System.out.println("4");
			for(int j=0;j<3;j++)
			System.out.println("3");
			bi=bi.divide(b27);
			System.out.println(bi.toString());
		}
		else if(ans9.compareTo(z)==0)
		{
			System.out.println("3");
			for(int j=0;j<2;j++)
			System.out.println("3");
			bi=bi.divide(b9);
			System.out.println(bi.toString());
		}
		else if(ans2.compareTo(z)==0)
		{
			System.out.println("2");
			for(int j=0;j<1;j++)
			System.out.println("2");
			bi=bi.divide(b2);
			System.out.println(bi.toString());
		}
		else if(ans3.compareTo(z)==0)
		{
			System.out.println("2");
			for(int j=0;j<1;j++)
			System.out.println("3");
			bi=bi.divide(b3);
			System.out.println(bi.toString());
		}
		else
		{
			System.out.println("1");
			System.out.println(bi.toString());
		}
	}
	}
}
