package com.company;

import java.util.Scanner;

public class Cndlove {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int j = 1; j <= T; j++) {
            int n = sc.nextInt();
            int[] a = new int[n];

            int sum = 0;
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                sum += a[i];
            }

            if (sum % 2 == 0)
                System.out.println("NO");

            else
                System.out.println("YES");


        }
    }
}