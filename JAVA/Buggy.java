package com.code;

import java.util.*;

//import static java.lang.Integer.parseInt;

class Buggy
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int T=sc.nextInt();
		for(int i=1;i<=T;i++)
		{
			String s1=sc.next();
			String s2=sc.next();
			StringBuilder s3=new StringBuilder();
			int j=0;
			int k=0;
			while(j<s1.length()&&k<s2.length())
			{
				int temp= Integer.parseInt(s1.substring(s1.length()-j-1,s1.length()-j))+Integer.parseInt(s2.substring(s2.length()-j-1,s2.length()-j));
				//s3.reverse();
				String s4=temp+"";
				s3.append(s4.charAt(s4.length()-1));
				//System.out.println(s3.substring(0,1));
				//s3.append(s3.substring(0,1));
				j++;
				k++;
			}

			while(j<s1.length())
			{
				s3.append(s1.substring(s1.length()-j-1,s1.length()-j));
				j++;
			}

			while(k<s2.length())
			{
				s3.append(s2.substring(s2.length()-k-1,s2.length()-k));
				k++;
			}

			System.out.println(s3.reverse());
		}
	}
}