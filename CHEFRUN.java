import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
        int length = in.nextInt();
        Double x1,x2,x3,v1,v2 ;
        Double d1,d2;
        for (int i = 0; i < length  ; i++) {
            x1 = in.nextDouble();
            x2 = in.nextDouble();
            x3 = in.nextDouble();
            v1 = in.nextDouble();
            v2 = in.nextDouble();

            x1 = x3 -x1;
            x2 = x2-x3;

            if((x1/v1) == (x2/v2)){
                System.out.println("Draw");
            }else if((x1/v1) < (x2/v2)){
                System.out.println("Chef");
            }else
                System.out.println("Kefa");

        }
	}
}
