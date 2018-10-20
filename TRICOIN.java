/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author jai sudh
 */
import java.util.*;
class TRICOIN{
	public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	int T = sc.nextInt();
	int[] res=new int[T];
	for(int a=0;a<T;a++){
		int no_Coin = sc.nextInt();
		int r=0;
		for(int i=1;no_Coin>0;i++,r++){
		if(no_Coin<i)
			break;
		no_Coin-=i;
		}
		res[a]=r;
	}
	for(int b=0;b<T;b++)
		System.out.println(res[b]);
	}
}