// 20200988 ��ǻ���а� ������, 72
import java.util.Random;
import java.util.HashSet;

public class Practice72 {

	public static void main(String[] args) {
		Random rg = new Random();
		
		for(int i = 0; i < 10; i++) {
			HashSet<Integer> set = new HashSet<Integer>();
			
			int j = 0;
			while(j < 5) {
				if(set.add(rg.nextInt(90) + 10) == false) {
					continue;
				}
				j++;
			}
			
			System.out.println("(" + (i + 1) + "ȸ) " + set);
		}
	}

}
