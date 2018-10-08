/*HIMANSHU CODER*/
import java.util.*;
import java.lang.*;
import java.io.*;
class Ideone
{
	public static void main (String[] args)
	{
		Scanner in=new Scanner(System.in);
		long t=in.nextLong();
		while(t-->0)
		{
			long a,b,onea=0,oneb=0,zeroa=0,zerob=0;
			a=in.nextLong();
			b=in.nextLong();
			if(a==b){
				System.out.println(0);
			}
			else if((b-a)==1)
			System.out.println(1);
			else if((b-1)<=0)
			System.out.println(-1);
			else
			{
				b=b-1;
				onea=Long.bitCount(a);
				oneb=Long.bitCount(b);
				if(onea<=oneb)
				System.out.println(oneb-onea+1);
				else
				System.out.println(2);
			}
		}
	}
}