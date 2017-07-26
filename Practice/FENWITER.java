import java.util.*;
import java.math.*;
import java.io.*;
class Cf
{
	static class FastReader
    {
        BufferedReader br;
        StringTokenizer st;
 
        public FastReader()
        {
            br = new BufferedReader(new
                     InputStreamReader(System.in));
        }
 
        String next()
        {
            while (st == null || !st.hasMoreElements())
            {
                try
                {
                    st = new StringTokenizer(br.readLine());
                }
                catch (IOException  e)
                {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
        int nextInt()
        {
            return Integer.parseInt(next());
        }
 
        long nextLong()
        {
            return Long.parseLong(next());
        }
 
        double nextDouble()
        {
            return Double.parseDouble(next());
        }
 
        String nextLine()
        {
            String str = "";
            try
            {
                str = br.readLine();
            }
            catch (IOException e)
            {
                e.printStackTrace();
            }
            return str;
        }
    }
	public static BigInteger binaryToBigInt(String s)
	{
		int len = s.length();
		StringBuffer sb = new StringBuffer(s);
		sb = sb.reverse();
		s = sb.toString();
		BigInteger bi = new BigInteger("0");
		BigInteger mul = new BigInteger("1");
		BigInteger two = new BigInteger("2");
		
		for (int i = 0; i < len; i++)
		{
			if (s.charAt(i) == '1')
			{
				bi = bi.add(mul);
			}
			mul = mul.multiply(two);
		}
		return bi;
	}
	public static void main(String args[])
	{
		FastReader sc = new FastReader();
		int t = sc.nextInt();
		String l1, l2, l3;
		while (t-- > 0)
		{
			l1 = sc.next();
			l2 = sc.next();
			l3 = sc.next();
			String tempL2 = "";
			int n = sc.nextInt();
			while (n-- > 0)
			{
				tempL2 += l2;
			}
			String l = l1 + tempL2 + l3;
			BigInteger index = binaryToBigInt(l);
			BigInteger zero = new BigInteger("0");
			BigInteger one = new BigInteger("1");
			BigInteger indexPlusOne;
			int cnt = 0;
			while ((index.compareTo(zero)) >= 0)
			{
				indexPlusOne = index.add(one);
				index = index.and(indexPlusOne);
				index = index.subtract(one);
				cnt++;
			}
			System.out.println(cnt);
		}
	}
}
