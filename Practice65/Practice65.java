// 20200988 컴퓨터학과 유하진, 65
import java.util.Scanner;

public class Practice65 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.println("문자열로 이루어진 순서쌍을 만듭니다.");
		System.out.print("첫 번째 원소를 입력하세요: ");
		String str1 = sc.next();
		System.out.print("두 번째 원소를 입력하세요: ");
		String str2 = sc.next();
		MyPair<String, String> p1 = new MyPair<String, String> (str1, str2);
		System.out.println(p1.toString());
		
		System.out.println("\n숫자로 이루어진 순서쌍을 만듭니다.");
		System.out.print("첫 번째 원소를 입력하세요: ");
		Integer num1 = sc.nextInt();
		System.out.print("두 번째 원소를 입력하세요: ");
		Integer num2 = sc.nextInt();
		MyPair<Integer, Integer> p2 = new MyPair<Integer, Integer> (num1, num2);
		System.out.println(p2.toString());
		
		sc.close();
	}

}
