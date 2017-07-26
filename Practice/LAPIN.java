import java.util.Arrays;
public class Main
{
public static void main (String[] args) throws java.lang.Exception
{
java.io.BufferedReader r = new java.io.BufferedReader (new java.io.InputStreamReader (System.in));
String s;
String str;
str=r.readLine();
Integer x = Integer.valueOf(str);
while(x>0)
{
	s=r.readLine();
	int l;
	l=s.length();
	String sub1=s.substring(0,l/2);
	int k=(l%2==0)?0:1;
	String sub2=s.substring(l/2+k,l);
	String original = sub1;
        char[] chars = original.toCharArray();
        Arrays.sort(chars);
        String sorted = new String(chars);
	String original1 = sub2;
        char[] chars1 = original1.toCharArray();
        Arrays.sort(chars1);
        String sorted1 = new String(chars1);
        if(sorted1.equals(sorted))
	System.out.println("YES");
	else
	System.out.println("NO");
	x--;
}
}
}
