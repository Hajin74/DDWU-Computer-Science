// 20200988 컴퓨터학과 유하진, 53
public class Practice53 {
	public static void main(String[] args) {
		BankAccount b0 = new BankAccount();
		System.out.println("첫 번째 은행 계좌의 정보입니다.");
		System.out.println(b0.toString() + "\n");
		
		BankAccount b1 = new BankAccount("김동덕", 100);
		System.out.println("두 번째 은행 계좌의 정보입니다.");
		System.out.println(b1.toString() + "\n");
		
		BankAccount b2 = new BankAccount("홍길동", 2000, 2.15);
		System.out.println("세 번째 은행 계좌의 정보입니다.");
		System.out.println(b2.toString() + "\n");
	}
}
