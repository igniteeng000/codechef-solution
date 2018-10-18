import java.io.*;
import java.util.*;
class RESCALC
{
    public static void main(String[] ar)throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        int t = Integer.parseInt(br.readLine());
        while(t-->0)
        {
            int n = Integer.parseInt(br.readLine()),max=0,c1=0,p=0;
            for(int j=0;j<n;j++)
            {
                String[] s = br.readLine().split(" ");
                int m = Integer.parseInt(s[0]),sum=m;
                int count[] = new int[7];
                ArrayList<Integer> al = new ArrayList<Integer>();
                for(int i=1;i<=m;i++)
                    count[Integer.parseInt(s[i])]++;
                for(int i=1;i<7;i++)
                    if(count[i]>0)
                        al.add(count[i]);
                int len=al.size();
                while(true)
                {
                    int c=0;
                    for(int i=0;i<len;i++)
                    {
                        if(al.get(i)>0)
                        {
                            int q = al.get(i);
                            al.set(i,--q);
                            c++;
                        }
                    }   
                    if(c==4)
                        sum+=1;
                    else if(c==5)
                        sum+=2;
                    else if(c==6)
                        sum+=4;
                    else 
                        break;
                }   
                if(sum>=max)
                {
                    if(sum==max)
                        c1++;
                    else
                    {
                        max=sum;
                        p=j+1;
                        c1=0;
                    }
                }            
            }
            if(c1>0)
                out.println("tie");
            else
            {
                if(p==1)
                    out.println("chef");
                else
                    out.println(p);
            }
            out.flush();
        }
    }
}