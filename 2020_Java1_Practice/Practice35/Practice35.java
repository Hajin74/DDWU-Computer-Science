// ��ǻ���а� 20200988 ������
public class Practice35 {

	public static void main(String[] args) {
		BankAccount account1 = new BankAccount();
		account1.name = "�赿��";
		account1.accountNo = "1234-5678";
		account1.balance = 100;
		account1.rate = 0.0;
		
		System.out.println("ù ��° ���� ������ �����Դϴ�.");
		System.out.println("�̸� : " + account1.name);
		System.out.println("���� ��ȣ : " + account1.accountNo);
		System.out.println("�ܾ� : " + account1.balance + "��");
		System.out.println("������ : " + account1.rate + "%");
		
		BankAccount account2 = new BankAccount();
		account2.name = "ȫ�浿";
		account2.accountNo = "9999-2531";
		account2.balance = 2000;
		account2.rate = 2.15;
		
		System.out.println("�� ��° ���� ������ �����Դϴ�.");
		System.out.println("�̸� : " + account2.name);
		System.out.println("���� ��ȣ : " + account2.accountNo);
		System.out.println("�ܾ� : " + account2.balance + "��");
		System.out.println("������ : " + account2.rate + "%");
	}

}
