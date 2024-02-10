// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice21 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("정수를 입력하세요:" );
		int num1 = input.nextInt();
		System.out.print("정수를 입력하세요:" );
		int num2 = input.nextInt();
		
		sum(num1, num2);
		sum(num2, num1);
		
		input.close();
	}
	
	public static void sum(int x, int y) {
		
		System.out.println(x + " + " + y + " = " + (x + y));
		
	}

}
