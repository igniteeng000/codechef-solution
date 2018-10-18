import java.io.*;
import java.util.*;
class BANDMATR
{
	public static void main(String[] ar)throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out = new PrintWriter(System.out);
		int t = Integer.parseInt(br.readLine());
		while(t-->0)
		{
			int n = Integer.parseInt(br.readLine()),c=0,p=n-1;
			int[] a = new int[n];
			a[0]=n;
			for(int i=1;i<n;i++)
			{
				a[i]=a[i-1]+2*p;
				p--;
			}	
			for(int i=0;i<n;i++)
			{
				String[] s = br.readLine().split(" ");
				for(int j=0;j<n;j++)
				{
					if(Integer.parseInt(s[j])==1)
						c++;
				}
			}
			for(int i=0;i<n;i++)
			{
				if(c<=a[i])
				{
					out.println(i);
					out.flush();
					break;
				}
			}
		}
	}
}