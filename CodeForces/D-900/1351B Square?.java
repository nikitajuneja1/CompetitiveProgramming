import java.util.*;
import java.lang.*;
import java.io.*;

public class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int n, y=0;
		int[] arr1=new int[2]; 
		int[] arr2=new int[2];
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		while(n>0){
		y=0;
		for(int i=0; i<2; i++){
		    arr1[i] = sc.nextInt();
		}
		for(int i=0; i<2; i++){
		    arr2[i] = sc.nextInt();
		}
		if(arr1[0]==arr2[0]){
		    if(arr1[1]+arr2[1]==arr1[0])
		        y++;
		}
		if(arr1[0]==arr2[1]){
		    if(arr1[1]+arr2[0]==arr1[0])
		        y++;
		}
		if(arr1[1]==arr2[0]){
		    if(arr1[0]+arr2[1]==arr1[1])
		       y++;
		}
		if(arr1[1]==arr2[1]){
		    if(arr1[0]+arr2[0]==arr1[1])
		        y++;
		}
		if(y>0){
		    System.out.println("YES");
		}
		else
		{
		    System.out.println("NO");
		}
		n--;
		}
	}
}

