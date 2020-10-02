import java.util.Scanner;
import java.util.HashMap;

class COINS{
  
  public static HashMap<Long,Long> hm = new HashMap<>();;
  
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);    
		long t;
		while (sc.hasNext()) {
      t = sc.nextLong();
			System.out.println(split(t));
		}		 
	}
    	
	public static long split(long coin_value) {
		if (hm.containsKey(coin_value)) {
      return hm.get(coin_value);
    } else if (coin_value > (coin_value/2 + coin_value/3 + coin_value/4) || coin_value == 0) {
      hm.put(coin_value, coin_value);
			return coin_value;
		} else {
      hm.put(coin_value, (split(coin_value/2) + split(coin_value/3) + split(coin_value/4)));
			return hm.get(coin_value);
		}
	}
}
