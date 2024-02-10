// 20200988 ��ǻ���а� ������, 63
import java.util.Scanner;


public class Practice63 {

	private static void getAccInfo(Scanner scan, BankAccount[] ba) {
		for(int i = 0; i < ba.length; i++) {
			ba[i] = new BankAccount();
			
			System.out.print("������ �̸��� �Է��ϼ���: ");
			String name = scan.next();
			ba[i].setOwner(name);
			System.out.print("�ܰ� �Է��ϼ���: ");
			int balance = scan.nextInt();
			ba[i].setBalance(balance);
		}
	}
	
	private static void printAccInfo(BankAccount[] ba) {
		System.out.println("\n���� �ܰ���Ȳ�Դϴ�.");
		System.out.println("���¹�ȣ\t������\t�ܰ�");
		for(int i = 0; i < ba.length; i++) {
			System.out.println(i + 1 + "\t" + ba[i].toString());
		}
	}
	
	private static int getAccNum(Scanner scan) throws NoSuchAccountException {
		System.out.print("������Ʈ�� ���¹�ȣ�� �Է��ϼ��� (����-0): ");
		
		int acc = scan.nextInt();
		if(acc == 0 || acc == 1 || acc == 2 || acc == 3) {
			return acc;
		}
		
		throw (new NoSuchAccountException());
	}
	
	private static int getOperationNum(Scanner scan) throws NoSuchOperationException {
		System.out.print("���ϴ� �۾��� �����ϼ��� (1-�Ա�/2-���)");
		
		int operation = scan.nextInt();
		if(operation == 1 || operation == 2) {
			return operation;
		}
		
		throw (new NoSuchOperationException());
	}
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		BankAccount[] list = new BankAccount[3];
		getAccInfo(input, list);
		
		int update = -1, work, money;
		do { // ���� �ܰ� ��Ȳ ������ �� �� ���
			
			printAccInfo(list);
			
			try {
				update = getAccNum(input);
				
				if(update != 0) { // �������� ������
					work = getOperationNum(input);
					
					if(work == 1) {
						System.out.print("�Աݾ��� �Է��ϼ���: ");
						money = input.nextInt();
						list[update - 1].deposit(money);
						System.out.println("�Ա��� �Ϸ�Ǿ����ϴ�.");
					} else if(work == 2){
						System.out.print("��ݾ��� �Է��ϼ���: ");
						money = input.nextInt();
						list[update - 1].withdraw(money);
						System.out.println("����� �Ϸ�Ǿ����ϴ�.");
					}
				}
				
			} catch (NegativeBalanceException e) {
				System.out.println("�Էµ� �ݾ��� �߸��Ǿ����ϴ�. �ٽ� �Է��ϼ���.\n");
			} catch (NoSuchAccountException e) {
				System.out.println("�߸��� ���¹�ȣ �Դϴ�. �ٽ� �Է��ϼ���.\n");
			} catch (NoSuchOperationException e) {
				System.out.println("�߸��� �۾��Դϴ�. �ٽ� �Է��ϼ���.\n");
			}
			 
		} while(update != 0);
		
		System.out.println("���α׷��� �����մϴ�.");
		
		input.close();

	}

}
