/* 20200988 ��ǻ���а� ������
 * #78
 */
import java.util.Scanner;

public class Practice78 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
	
		System.out.println("���� ���� ����� �����Դϴ�.");
		BankAccount b1 = new BankAccount("�赿��", 600, 3.1);
		System.out.println(b1.toString());
		BankAccount b2 = new BankAccount("ȫ�浿", 600, 2.15);
		System.out.println(b2.toString());
		BankAccount b3 = new BankAccount("������", 500, 2.05);
		System.out.println(b3.toString());
		
		System.out.println("\n���� " + b2.getAccountNo() + "���� ���� " + b3.getAccountNo() + "���� �۱��� �ݾ��� �Է��ϼ���: ");
		int money = input.nextInt();
		
		boolean rst = b2.transfer(b3, money);
		if(rst == true) {
			System.out.println("\n" + b1.toString());
			System.out.println(b2.toString());
			System.out.println(b3.toString());
		} else {
			System.out.println("�۱��� �����߽��ϴ�.");
		}
		
		input.close();
	}
}
