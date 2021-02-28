import java.util.Scanner;
 
public class Expression
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int sum = 0;
		sum = a*b*c;
		if(sum<((a+b)*c)){
		    sum = (a+b)*c;
		}
		if(sum<(a*(b+c))){
		    sum = a*(b+c);
		}
		if(sum<(a+(b*c))){
		    sum = a+(b*c);
		}
		if(sum<(a+b+c)){
		    sum = a+b+c;
		}
		System.out.println(sum);
		sc.close();
	}
}