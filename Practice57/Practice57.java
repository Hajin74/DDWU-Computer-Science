// 20200988 컴퓨터학과 유하진 #57
import java.util.Scanner;
public class Practice57 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("은행 계좌 모두의 정보입니다.");
		BankAccount b0 = new BankAccount();
		b0.setName("김동덕");
		b0.setBalance(100);
		b0.setInterest(3.1);
		BankAccount b1 = new BankAccount("홍길동", 2000);
		b1.setInterest(2.15);
		BankAccount b2 = new BankAccount("성춘향", 500, 2.05);
		
		
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());
		
		System.out.print("\n계좌 " + b0.getAccountNo() + "에 입금할 금액을 입력하세요: ");
		
		int num = input.nextInt();
		boolean d0 = b0.deposit(num);
		if(d0) {
			b0.setBalance(b0.getBalance() + num);
			System.out.println("입금이 성공했습니다.\n");
		} else {
			System.out.println("입금이 실패했습니다.\n");
		}
		
		System.out.println("은행 계좌 모두의 정보입니다.");
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());
	
		System.out.println("\n계좌 " + b1.getAccountNo() + "에서 출금할 금액을 입력하세요: ");
		
		num = input.nextInt();
		boolean w0 = b1.withdraw(num);
		if(w0) {
			b1.setBalance(b1.getBalance() - num);
			System.out.println("출금이 성공했습니다.\n");
		} else {
			System.out.println("출금이 실패했습니다.\n");
		}
		
		System.out.println("은행 계좌 모두의 정보입니다.");
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());
		
		System.out.println("\n계좌 " + b1.getAccountNo() + "에서 계좌 " + b2.getAccountNo() +  "으로 송금할 금액을 입력하세요: ");
		num = input.nextInt();
		boolean t0 = BankAccount.transfer(b1, b2, num);
		if(t0) {
			b1.setBalance(b1.getBalance() - num);
			b2.setBalance(b2.getBalance() + num);
			System.out.println("송금이 성공했습니다.\n");
		} else {
			System.out.println("송금이 실패했습니다.\n");
		}
		
		System.out.println("은행 계좌 모두의 정보입니다.");
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());
		
		input.close();
	}
}
