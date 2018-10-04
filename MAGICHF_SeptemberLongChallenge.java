import java.util.*;
class magicnf{
	public static void main(String arg[]){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int i=0;i<t;i++){
			int n,k,s;
			n  = sc.nextInt();
			k  = sc.nextInt();
			s  = sc.nextInt();
			int pos = k;
			for(int j=0;j<s;j++){
				int n1 =  sc.nextInt();
			    int n2  = sc.nextInt();
                if(n1==pos){
                	pos = n2;
                }
                else if(n2==pos){
                	pos = n1;
                }
                else{
                	continue;
                }
			}
			System.out.println(pos);
		}
	}
}