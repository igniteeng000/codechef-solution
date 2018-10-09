package com.company;

import java.util.Scanner;

public class Chefg {
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int k = 1; k <= T; k++) {
            int n = sc.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];
            boolean front = false;
            boolean back = false;

            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }

            for (int i = 0; i < n; i++) {
                b[i] = sc.nextInt();
            }

            for (int i = 0; i < n; i++) {
                if (a[i] <= b[i]) {
                    front = true;
                } else {
                    front = false;
                    break;
                }
            }

            for (int i = 0; i < n; i++) {
                if (a[i] <= b[n - i - 1]) {
                    back = true;
                } else {
                    back = false;
                    break;
                }
            }

            if (front == true) {
                if (back == true) {
                    System.out.println("both");
                } else {
                    System.out.println("front");
                }
            } else if (back == true) {
                System.out.println("back");
            } else {
                System.out.println("none");
            }

        }
    }
}