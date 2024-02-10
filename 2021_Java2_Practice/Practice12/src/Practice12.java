// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice12 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("정수를 입력하세요: ");
		int num = input.nextInt();
		
		while(num <= 0) {
			System.out.println("잘못된 입력입니다. 다시 입력하세요.");
			System.out.print("정수를 입력하세요: ");
			num = input.nextInt();
		}
		
		int count = 0;
		for(int i = 1; i <= num; i++) {
			if(i % 5 != 0) {
				count++;
				if(count % 7 == 0) {
					System.out.print(i + "\n");
				} else {
					System.out.print(i + "\t");
				}
			} else {
				continue;
			}
		}
		
		input.close();
	}

}
