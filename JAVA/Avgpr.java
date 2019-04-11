package com.company;

import java.util.ArrayList;
import java.util.Scanner;

class Avgpr {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int k = 1; k <= T; k++) {
            int n = sc.nextInt();
            int[] a = new int[n];
            ArrayList<Integer> br = new ArrayList<Integer>();
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                br.add(a[i]);
            }


            int count = 0;
            for (int i = 0; i < br.size(); i++) {
                for (int j = i + 1; j < br.size(); j++) {
                    if (br.contains(((br.get(i) + br.get(j)) / 2)) && ((br.get(i) + br.get(j)) % 2)==0)
                        count++;
                }
            }

            System.out.println(count);
        }
    }
}