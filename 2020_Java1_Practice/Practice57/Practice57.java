// 20200988 ��ǻ���а� ������ #57
import java.util.Scanner;
public class Practice57 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("���� ���� ����� �����Դϴ�.");
		BankAccount b0 = new BankAccount();
		b0.setName("�赿��");
		b0.setBalance(100);
		b0.setInterest(3.1);
		BankAccount b1 = new BankAccount("ȫ�浿", 2000);
		b1.setInterest(2.15);
		BankAccount b2 = new BankAccount("������", 500, 2.05);
		
		
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());
		
		System.out.print("\n���� " + b0.getAccountNo() + "�� �Ա��� �ݾ��� �Է��ϼ���: ");
		
		int num = input.nextInt();
		boolean d0 = b0.deposit(num);
		if(d0) {
			b0.setBalance(b0.getBalance() + num);
			System.out.println("�Ա��� �����߽��ϴ�.\n");
		} else {
			System.out.println("�Ա��� �����߽��ϴ�.\n");
		}
		
		System.out.println("���� ���� ����� �����Դϴ�.");
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());
	
		System.out.println("\n���� " + b1.getAccountNo() + "���� ����� �ݾ��� �Է��ϼ���: ");
		
		num = input.nextInt();
		boolean w0 = b1.withdraw(num);
		if(w0) {
			b1.setBalance(b1.getBalance() - num);
			System.out.println("����� �����߽��ϴ�.\n");
		} else {
			System.out.println("����� �����߽��ϴ�.\n");
		}
		
		System.out.println("���� ���� ����� �����Դϴ�.");
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());
		
		System.out.println("\n���� " + b1.getAccountNo() + "���� ���� " + b2.getAccountNo() +  "���� �۱��� �ݾ��� �Է��ϼ���: ");
		num = input.nextInt();
		boolean t0 = BankAccount.transfer(b1, b2, num);
		if(t0) {
			b1.setBalance(b1.getBalance() - num);
			b2.setBalance(b2.getBalance() + num);
			System.out.println("�۱��� �����߽��ϴ�.\n");
		} else {
			System.out.println("�۱��� �����߽��ϴ�.\n");
		}
		
		System.out.println("���� ���� ����� �����Դϴ�.");
		System.out.println(b0.toString());
		System.out.println(b1.toString());
		System.out.println(b2.toString());
		
		input.close();
	}
}
