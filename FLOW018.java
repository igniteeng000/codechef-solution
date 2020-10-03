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
        int sum = 1;
        int num = 0;
        while (i < testCases) {
            num = in.nextInt();
            for (int j = 1; j <= num; j++) {
                sum=sum*j;
            }
            System.out.println(sum);
            sum = 1;
           i++;
        }
	}
}
