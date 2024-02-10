/* 20200988 컴퓨터학과 유하진
 * #78
 */
import java.util.Scanner;

public class Practice78 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
	
		System.out.println("은행 계좌 모두의 정보입니다.");
		BankAccount b1 = new BankAccount("김동덕", 600, 3.1);
		System.out.println(b1.toString());
		BankAccount b2 = new BankAccount("홍길동", 600, 2.15);
		System.out.println(b2.toString());
		BankAccount b3 = new BankAccount("성춘향", 500, 2.05);
		System.out.println(b3.toString());
		
		System.out.println("\n계좌 " + b2.getAccountNo() + "에서 계좌 " + b3.getAccountNo() + "으로 송금할 금액을 입력하세요: ");
		int money = input.nextInt();
		
		boolean rst = b2.transfer(b3, money);
		if(rst == true) {
			System.out.println("\n" + b1.toString());
			System.out.println(b2.toString());
			System.out.println(b3.toString());
		} else {
			System.out.println("송금이 실패했습니다.");
		}
		
		input.close();
	}
}
