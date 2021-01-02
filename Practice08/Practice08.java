// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice08 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int m500, m100, m50, m10, change;
		
		System.out.print("거스름돈 총액: ");
		change = input.nextInt();
		
		m500 = change / 500;
		change = change % 500;
		System.out.println("500원짜리 동전: " + m500 + "개");
		
		m100 = change / 100;
		change = change % 100;
		System.out.println("100원짜리 동전: " + m100 + "개");
		
		m50 = change / 50;
		change = change % 50;
		System.out.println("50원짜리 동전: " + m50 + "개");
		
		m10 = change / 10;
		change = change % 10;
		System.out.println("100원짜리 동전: " + m10 + "개");
		
		input.close();
	}

}
