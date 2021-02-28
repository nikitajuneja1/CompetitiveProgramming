import java.util.*;
import java.io.*;
import java.lang.*;

class reverseString
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        
        while(t-- >0)
        {
            String str = read.readLine();
            System.out.println(new Reverse().reverseWord(str));
        }
    }
}


class Reverse
{
    public static String reverseWord(String str)
    {
        char[] ch = new char[str.length()]; 
  
        for (int i = 0; i < str.length(); i++) { 
            ch[i] = str.charAt(i); 
        } 
        int len = str.length();
        for (int i=0; i < (len/2); i++)
        {
            char l = ch[i];
            ch[i] = ch[len-i-1];
            ch[len-i-1] = l;
        }
        return String.valueOf(ch);
     }
}