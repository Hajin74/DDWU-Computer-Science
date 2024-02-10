// 20200988 ��ǻ���а� ������, 62
import java.util.Scanner;

public class Practice62 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		BankAccount[] list = new BankAccount[3];
		
		for(int i = 0; i < list.length; i++) {
			list[i] = new BankAccount();
			
			System.out.print("������ �̸��� �Է��ϼ���: ");
			String name = input.next();
			list[i].setOwner(name);
			System.out.print("�ܰ� �Է��ϼ���: ");
			int balance = input.nextInt();
			list[i].setBalance(balance);
		}
		
		int update, work, money;
		
		do { // ���� �ܰ� ��Ȳ ������ �� �� ���
			System.out.println("���� �ܰ���Ȳ�Դϴ�.");
			System.out.println("���¹�ȣ\t������\t�ܰ�");
			for(int i = 0; i < list.length; i++) {
				System.out.println(i + 1 + "\t" + list[i].toString());
			}
			
			System.out.print("������Ʈ�� ���¹�ȣ�� �Է��ϼ��� (����-0): ");
			update = input.nextInt();
			
			if(update != 0) { // �������� ������
				System.out.print("���ϴ� �۾��� �����ϼ��� (1-�Ա�/2-���)");
				work = input.nextInt();
				
				if(work == 1) {
					System.out.print("�Աݾ��� �Է��ϼ���: ");
					money = input.nextInt();
					list[update - 1].deposit(money);
					System.out.println("�Ա��� �Ϸ�Ǿ����ϴ�.\n");
				} else if(work == 2){
					System.out.print("��ݾ��� �Է��ϼ���: ");
					money = input.nextInt();
					
					try {
						list[update - 1].withdraw(money);
						System.out.println("����� �Ϸ�Ǿ����ϴ�.");						
					} catch (NegativeBalanceException e) {
						System.out.println("�Էµ� �ݾ��� �߸��Ǿ����ϴ�. �ٽ� �Է��ϼ���.\n");
					}
				}
			}
			 
		} while(update != 0);
		
		System.out.println("���α׷��� �����մϴ�.");
		
		input.close();
	}

}
