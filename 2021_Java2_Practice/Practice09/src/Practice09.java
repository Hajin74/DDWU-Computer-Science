// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice09 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int num, sum = 0;
		
		do {
			System.out.print("숫자를 입력하세요: ");
			num = input.nextInt();
			
			if(num < 0)
				System.out.println("음수가 입력되었습니다. 다시 입력하세요.");
			else
				sum += num;
		} while(num != 0);
		
		System.out.println("입력된 숫자들의 합은 " + sum + "입니다.");
		
		input.close();
	}

}
