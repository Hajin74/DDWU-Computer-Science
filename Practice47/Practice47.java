// 20200988 ��ǻ���а� ������, 47
public class Practice47 {

	public static void main(String[] args) {
		BankAccount obj1 = new BankAccount();
		
		System.out.println("ù ��° ���� ������ �����Դϴ�.");
		obj1.setName("�赿��");
		obj1.setAccountNo("1234-5678");
		obj1.setBalance(100);
		obj1.setRate(0.0);
		System.out.println(obj1.toString());
		
		BankAccount obj2 = new BankAccount();
		
		System.out.println("\n�� ��° ���� ������ �����Դϴ�.");
		obj2.setName("ȫ�浿");
		obj2.setAccountNo("9999-2531");
		obj2.setBalance(20000);
		obj2.setRate(2.15);
		System.out.println(obj2.toString());
	}

}
