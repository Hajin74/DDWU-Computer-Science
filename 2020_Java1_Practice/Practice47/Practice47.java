// 20200988 컴퓨터학과 유하진, 47
public class Practice47 {

	public static void main(String[] args) {
		BankAccount obj1 = new BankAccount();
		
		System.out.println("첫 번째 은행 계좌의 정보입니다.");
		obj1.setName("김동덕");
		obj1.setAccountNo("1234-5678");
		obj1.setBalance(100);
		obj1.setRate(0.0);
		System.out.println(obj1.toString());
		
		BankAccount obj2 = new BankAccount();
		
		System.out.println("\n두 번째 은행 계좌의 정보입니다.");
		obj2.setName("홍길동");
		obj2.setAccountNo("9999-2531");
		obj2.setBalance(20000);
		obj2.setRate(2.15);
		System.out.println(obj2.toString());
	}

}
