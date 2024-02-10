// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice25 {

	public static void main(String[] args) {
		
		int num = isWrongNumber();
		printTimes(num);
	
	}
	
	public static void printTimes(int num) {
		
		if(num < 10) {
			for(int i = 1; i <= 9; i++) {
				System.out.println(num + " * " + i + " = " + num * i);
			}			
		} else {
			for(int i = 1; i <= num; i++) {
				System.out.println(num + " * " + i + " = " + num * i);
			}		
		}
	}
	
	public static int isWrongNumber() {
		
		Scanner input = new Scanner(System.in);
		System.out.print("정수를 입력하세요 : ");
		int num = input.nextInt();
		
		while(num < 1) {
			System.out.print("잘못된 입력입니다. 다시 입력하세요.");
			System.out.print("정수를 입력하세요 : ");
			num = input.nextInt();
		}
		
		input.close();
		
		return num;
	}

}
