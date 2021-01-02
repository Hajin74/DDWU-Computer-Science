// 20200988 컴퓨터학과 유하진, 51
import java.util.Random;

public class Practice51 {
	public static void main(String[] args) {
		Random rg = new Random();
		
		int maxNum = 0, minNum = 0;
		int num;
		
		for(int i = 1; i <= 10000; i++) {
			if(i % 10 == 0) {
				num = rg.nextInt(9000) + 1000;
				System.out.println(num);
			} else {
				num = rg.nextInt(9000) + 1000;
				System.out.print(num + "\t");
			}
			
			if(num == 1000) {
				minNum++;
			}
			
			if(num == 9999) {
				maxNum++;
			}	
		}
		
		System.out.println("\n# of 1000: " + minNum);
		System.out.println("# of 9999: " + maxNum);

	}
}
