// 컴퓨터학과 20200988 유하진
import java.util.Random;

public class Practice08 {

	public static void main(String[] args) {
		Random rg = new Random();

		int i, j, num;
		
		for(i = 0; i < 10; i++) {
			for(j = 0; j < 10; j++) {
				num = rg.nextInt(100);
				System.out.print(num + "\t");
			}
			System.out.println();
		}
	}

}
