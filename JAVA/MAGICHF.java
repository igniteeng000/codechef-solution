import java.util.*;
class chefadv{
	public static void main(String arg[]){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int i=0;i<t;i++){
			int n,m,x,y;
			n  = sc.nextInt();
			m  = sc.nextInt();
			x  = sc.nextInt();
			y = sc.nextInt();
			if((n-1)%x==0 && (m-1)%y==0 && (n-1)>=0 && (m-1)>=0){
				System.out.println("Chefirnemo");
			}
			else if((n-2)%x==0 && (m-2)%y==0 && (n-2)>=0 && (m-2)>=0){
				System.out.println("Chefirnemo");
			}
            else{
            	System.out.println("Pofik");
            }
			
		}
		//System.out.println(-1%1);
	}
}
