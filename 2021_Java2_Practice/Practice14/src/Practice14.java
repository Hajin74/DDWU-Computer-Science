// ��ǻ���а� 20200988 ������
import java.util.Scanner;
import java.util.Random;

public class Practice14 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		Random rg = new Random();
		
		int randomNum = rg.nextInt(3);
		
		switch(randomNum) {
			case 0: 
				System.out.println("��ǻ���� ����: ����");
				break;
			case 1:
				System.out.println("��ǻ���� ����: ����");
				break;
			case 2:
				System.out.println("��ǻ���� ����: ��");
				break;
		}
		
		String user;
		do {
			System.out.print("����� �Է�: ");
			user = input.next();	
			
			if(!(user.equals("����") || user.equals("����") || user.equals("��"))) {
				System.out.println("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.");
			}
		} while(!(user.equals("����") || user.equals("����") || user.equals("��")));
		
		if(user.equals("����")) {
			if(randomNum == 0) {
				System.out.println("�����ϴ�.");
			} else if(randomNum == 1) {
				System.out.println("��ǻ�Ͱ� �̰���ϴ�.");
			} else {
				System.out.println("����� �̰���ϴ�.");
			}
		} else if(user.equals("����")) {
			if(randomNum == 0) {
				System.out.println("����� �̰���ϴ�.");
			} else if(randomNum == 1) {
				System.out.println("�����ϴ�.");
			} else {
				System.out.println("��ǻ�Ͱ� �̰���ϴ�.");
			}
		} else {
			if(randomNum == 0) {
				System.out.println("��ǻ�Ͱ� �̰���ϴ�.");
			} else if(randomNum == 1) {
				System.out.println("����� �̰���ϴ�.");
			} else {
				System.out.println("�����ϴ�.");
			}
		}
		
		input.close();
	}

}
