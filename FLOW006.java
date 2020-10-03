/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		
		Scanner in = new Scanner(System.in);
        int testCases = in.nextInt();
        int i = 0;
        int sum = 0;
        while (i < testCases) {

            String number  = in.next();
            String[] arr = number.split("");
            
            for (int j = 0; j < arr.length; j++) {
                sum += Integer.parseInt(arr[j]);    
            }
            
            System.out.println(sum);
            sum = 0;
            
            i++;
        }
	}
}
