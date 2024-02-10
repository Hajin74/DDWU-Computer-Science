// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice12 {

	public static void main(String[] args) {

		Scanner input = new Scanner(System.in);
		System.out.print("첫 번째 숫자를 입력하세요 : ");
		int n1 = input.nextInt();
		System.out.print("두 번째 숫자를 입력하세요 : ");
		int n2 = input.nextInt();
		System.out.print("세 번째 숫자를 입력하세요 : ");
		int n3 = input.nextInt();
		
		int min;
		if(n2 <= n1 && n2 <= n3) {
			min = n2;
		} else if(n3 <= n1 && n3 <= n2) {
			min = n3;
		} else {
			min = n1;
		}
		
		System.out.println("가장 작은 숫자는 " + min + "입니다.");
		input.close();
	}

}
