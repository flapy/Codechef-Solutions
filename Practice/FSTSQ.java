import java.util.*;
    import java.lang.*;
    import java.io.*;
    import java.math.*;
     
    /* Name of the class has to be "Main" only if the class is public. */
    class Ideone
    {
    	
    	public static void main (String[] args) throws java.lang.Exception
    	{
    		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer token = new StringTokenizer("");
    		// your code goes here
    		int t;
    		long p_23[]=new long [1000006];
    		 String temp[] = br.readLine().split(" ");
    		t=Integer.parseInt(temp[0]);
    		long mod=1000000007;
    				p_23[0]=1;
		p_23[1]=23;
			for(int i=2;i<1000006;i++){
			p_23[i]=23*p_23[i-1];
			if(p_23[i]>mod){
				p_23[i]%=mod;
			}
		}
    		while(t-->0)
    		{
    			int n;
    			String temp1[] = br.readLine().split(" ");
    			n=Integer.parseInt(temp1[0]);
    			String str="";
    			StringBuffer sb=new StringBuffer("");
			for(int i=0;i<n;i++){
				sb.append(temp1[1]);
			}
			str=sb.toString();
    			BigInteger bi=new BigInteger(str);
    			bi=bi.multiply(bi);
    			String str1=bi.toString();
    			int l1=str1.length();
    			//System.out.println(str1);
    			long sum=0;
    			for(int i=0;i<l1;i++)
    			{
    				int w1=str1.charAt(i)-48;
    				sum=(sum+p_23[i]*w1);
    				if(sum>mod)
    				sum%=mod;
    			}
    			System.out.println(sum);
    		}
    	}
    }
