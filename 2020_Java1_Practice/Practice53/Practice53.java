// 20200988 ��ǻ���а� ������, 53
public class Practice53 {
	public static void main(String[] args) {
		BankAccount b0 = new BankAccount();
		System.out.println("ù ��° ���� ������ �����Դϴ�.");
		System.out.println(b0.toString() + "\n");
		
		BankAccount b1 = new BankAccount("�赿��", 100);
		System.out.println("�� ��° ���� ������ �����Դϴ�.");
		System.out.println(b1.toString() + "\n");
		
		BankAccount b2 = new BankAccount("ȫ�浿", 2000, 2.15);
		System.out.println("�� ��° ���� ������ �����Դϴ�.");
		System.out.println(b2.toString() + "\n");
	}
}
