// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice13 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		String user1, user2;
		
		do {
			System.out.print("ö���� �Է�: ");
			user1 = input.next();	
			
			if(!(user1.equals("����") || user1.equals("����") || user1.equals("��"))) {
				System.out.println("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.");
			}
		} while(!(user1.equals("����") || user1.equals("����") || user1.equals("��")));
		
		do {
			System.out.print("������ �Է�: ");
			user2 = input.next();	
			
			if(!(user2.equals("����") || user2.equals("����") || user2.equals("��"))) {
				System.out.println("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.");
			}
		} while(!(user2.equals("����") || user2.equals("����") || user2.equals("��")));
		
		if(user1.equals("����")) {
			if(user2.equals("����")) {
				System.out.println("�����ϴ�.");
			} else if(user2.equals("����")) {
				System.out.println("���� �̰���ϴ�.");
			} else {
				System.out.println("ö���� �̰���ϴ�.");
			}	
		} else if(user1.equals("����")) {
			if(user2.equals("����")) {
				System.out.println("ö���� �̰���ϴ�.");
			} else if(user2.equals("����")) {
				System.out.println("�����ϴ�.");
			} else {
				System.out.println("���� �̰���ϴ�.");
			}
		} else {
			if(user2.equals("����")) {
				System.out.println("���� �̰���ϴ�.");
			} else if(user2.equals("����")) {
				System.out.println("ö���� �̰���ϴ�.");
			} else {
				System.out.println("�����ϴ�.");
			}
		}
		
		input.close();
	}
	
}
