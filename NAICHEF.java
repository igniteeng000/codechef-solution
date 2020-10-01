import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public.
*  @author Rana M. Suleman
 */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	
	Scanner in = new Scanner(System.in);

        int length = in.nextInt();
        do{
            int[] arr = new int[in.nextInt()];
            double a = in.nextDouble();
            double b = in.nextDouble();
            for (int i = 0; i < arr.length ; i++) {
             arr[i] = in.nextInt();
            }

            double a_faces=0,b_faces = 0;
            for (int value: arr) {
                if(value == a) a_faces++;
                if(value == b) b_faces++;
            }
            System.out.println((a_faces/ ((double) arr.length))*(b_faces/ ((double) arr.length)));
            length--;
        }while(length != 0);

	}
}
