// 20200988 컴퓨터학과 유하진, 56
import java.util.Scanner;

public class Practice56 {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int num1 = 0, num2 = 0;
		
		boolean isDone = false;
		
		while(isDone != true) {
			try {
				System.out.print("1번 피연산자를 입력하세요: ");
				String str = s.next();
		
				num1 = Integer.parseInt(str);
			} catch (NumberFormatException e) {
				System.out.println("잘못된 형식의 숫자입니다. 다시 입력하세요.");
				continue;
			} 
			isDone = true;
		}
		
		
		
		isDone = false;
		while(isDone != true) {
			try {
				System.out.print("2번 피연산자를 입력하세요: ");
				String str = s.next();
		
				num2 = Integer.parseInt(str);
			} catch (NumberFormatException e) {
				System.out.println("잘못된 형식의 숫자입니다. 다시 입력하세요.");
				continue;
			}
			isDone = true;
		}
		
		System.out.println(num1 + " + " + num2 + " = " + (num1 + num2));
				
		s.close();
	}

}
