package com.code;

import java.util.Scanner;

 class Chefptn {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int j = 1; j <= T; j++) {
            int N = sc.nextInt();
            int M = sc.nextInt();
            int X = sc.nextInt();
            int K = sc.nextInt();
            int c1 = 0, c2 = 0;

            String str = sc.next();

            for (int i = 0; i < K; i++) {
                if (str.charAt(i) == 'E') {
                    c1++;
                } else {
                    c2++;
                }
            }

            for (int i = 1; i <= M; i++) {
                if (i % 2 == 0) {
                    if (c1 >= X) {
                        if(N>=c1)
                        {
                            c1 -= X;
                            N -= X;
                        }

                        else
                        {
                            if(N<X)
                            {
                                N =0;
                                c1 = 0;
                            }

                            else
                            {
                                N-=X;
                                c1-=X;
                            }
                        }

                    } else {
                        if(N<c1)
                        {
                            if(N<X)
                            {
                                N =0;
                                c1 = 0;
                            }

                            else
                            {
                                N-=X;
                                c1-=X;
                            }
                        }
                        else
                        {
                        N -= c1;
                        c1 = 0;
                    }
                    }
                }

                else {
                    if (c2 >= X) {
                        if(N>=c2)
                        {
                            c2 -=X;
                            N -= X;
                        }

                        else
                        {
                            if(N<X)
                            {
                                N =0;
                                c2 = 0;
                            }

                            else
                            {
                                N-=X;
                                c2-=X;
                            }
                        }
                    }

                    else
                        {

                            if(N<c2)
                            {
                                if(N<X)
                                {
                                    N =0;
                                    c2 = 0;
                                }

                                else
                                {
                                    N-=X;
                                    c2-=X;
                                }
                            }
                            else
                            {
                                N -= c2;
                                c2 = 0;
                            }
                    }
                }
            }

            System.out.println(N + "" + c1 + "" + c2);
            if(N==0)
            {
                System.out.println("yes");
            }

            else
            {
                System.out.println("no");
            }
        }
    }
}