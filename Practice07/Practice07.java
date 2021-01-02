// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice07 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int m500, m100, m50, m10;
		
		System.out.print("500원 짜리의 개수: ");
		m500 = input.nextInt();
		
		System.out.print("100원 짜리의 개수: ");
		m100 = input.nextInt();
		
		System.out.print("50원 짜리의 개수: ");
		m50 = input.nextInt();
		
		System.out.print("10원 짜리의 개수: ");
		m10 = input.nextInt();
		
		int sum = m500 * 500 + m100 * 100 + m50 * 50 + m10 * 10; 
		System.out.println("저금통에 있는 총액: " + sum + "원");
		
		input.close();
	}

}
