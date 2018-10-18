package com.code;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

class Chefchr {
    public static void main(String args[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T=Integer.parseInt(br.readLine());
        for(int j=1;j<=T;j++)
        {
            String str=br.readLine();
            int count=0;
            str=str.replaceAll("[^a-zA-Z]","");
            str=str.toLowerCase();

        for(int i=0;i<(str.length()-3);i++)
        {
            char temp[]=str.substring(i,i+4).toCharArray();
            Arrays.sort(temp);
            String b=new String(temp);
            if(b.equals("cefh"))
            {
                count++;
            }
        }
        if(count==0)
        {
            System.out.println("normal");
        }

        else
        {
            System.out.println("lovely"+" "+count);
        }
    }
}}