package com.code;

import java.util.*;

class Gamenub {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int k = 1; k <= T; k++) {
            ArrayList<Integer> arr = new ArrayList<>();
            int N = sc.nextInt();
            int K = sc.nextInt();
            int[] a = new int[N];
            int[] b = new int[N];
            int[] c = new int[K];

            for (int i = 0; i < N; i++) {
                a[i] = sc.nextInt();
            }

            for (int i = 0; i < N; i++) {
                b[i] = sc.nextInt();
            }

            for (int i = 0; i < K; i++) {
                c[i] = sc.nextInt();
            }

            Arrays.sort(a);

            int l = 0;
            int r = 0;
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < b[i]; j++) {
                    arr.add(a[i]);
                }
            }

            for (int i = 0; i < K; i++) {
                if ((i + 1) % 2 != 0) {
                    l = (arr.size() - c[i]) ;
                    r = arr.size() - 1;
                } else {
                    r = arr.size() - c[i] - 1;
                }
            }

            int sum = 0;
            for (int i = l; i <= r; i++) {
                sum += arr.get(i);
            }

            System.out.println(sum);

        }
    }
}
