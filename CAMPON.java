import java.util.Scanner;
import java.lang.Math;

public class Main {
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		
		byte t = sc.nextByte(); // The number of test cases
		for(byte i = 0; i < t; i++) {
			byte d = sc.nextByte(); // The number of days is Jafar's schedule
			byte di[] = new byte[d];
			byte p[] = new byte[d];
			
			for(byte j = 0; j < d; j++) {
				di[j] = sc.nextByte();
				p[j] = sc.nextByte();
				// Jafar will solve pi problems on day di
			}
			
			byte q = sc.nextByte(); // The number of scenarios Jafar considers
			for(byte k = 0; k < q; k++) {
				byte dead = sc.nextByte();
				int req = sc.nextInt();
				int sum = 0;
				
				for(byte l = 0; l < d; l++) {
					if(di[l] > dead) break;
					
					sum += p[l];
					if(sum >= req) break;
				}
				
				if(sum >= req) System.out.println("Go Camp");
				else System.out.println("Go Sleep");
			}
		}
	}
}
