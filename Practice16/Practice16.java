// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice16 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		System.out.print("정수를 하나 입력하세요: ");
		int number = input.nextInt();
		
		int j = 1;
		for(int i = 0; i <= number; i += 3) {
			if(j % 5 == 0) {
				System.out.print(i + "\n");
			} else {
				System.out.print(i + "\t" );
			}
			j++;
		}
		
		input.close();
	}

}
