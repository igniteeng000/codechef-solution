package com.company;

import java.util.Scanner;

public class Got {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        int[] count=new int[26];
        int ct=0;
        for(int i=0;i<str.length();i++)
        {
            count[str.charAt(i)-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(count[i]!=0)
            {
                if(count[i]%2==1)
                    ct++;
            }
        }

        if(ct<=1)
            System.out.println("YES");

        else
            System.out.println("NO");
    }
}
