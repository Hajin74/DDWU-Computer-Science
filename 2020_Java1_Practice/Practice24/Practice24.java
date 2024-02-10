// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice24 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("정수를 입력하세요 : ");
		int num = input.nextInt();
		System.out.println("구구단 " + num + "단 입니다.");
		printTimes(num);
		
		input.close();

	}
	
	public static void printTimes(int num) {
		
		for(int i = 1; i <= 9; i++) {
			System.out.println(num + " * " + i + " = " + num * i);
		}
	}

}
