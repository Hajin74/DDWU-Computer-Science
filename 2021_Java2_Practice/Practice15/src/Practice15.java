// ��ǻ���а� 20200988 ������
import java.util.Scanner;
import java.util.Random;

public class Practice15 {
	
	public static int whoswin(String com, String you) {
		if(com.equals(you)) {
			return 0;
		} else {
			if(com.equals("����")) {
				if(you.equals("����"))
					return 1;
				else
					return -1;
			} else if(com.equals("����")) {
				if(you.equals("����"))
					return -1;
				else
					return 1;
			} else {
				if(you.equals("����"))
					return 1;
				else
					return -1;
			}
		}
	}
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		Random rg = new Random();
		
		int randomNum = rg.nextInt(3);
		String com;
		
		if(randomNum == 0)
			com = "����";
		else if(randomNum == 1)
			com = "����";
		else
			com = "��";
		System.out.println("��ǻ���� ����: " + com);
		
		String user;
		do {
			System.out.print("����� �Է�: ");
			user = input.next();	
			
			if(!(user.equals("����") || user.equals("����") || user.equals("��"))) {
				System.out.println("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.");
			}
		} while(!(user.equals("����") || user.equals("����") || user.equals("��")));
		
		int win = whoswin(com, user);
		if(win == -1)
			System.out.println("��ǻ�Ͱ� �̰���ϴ�.");
		else if(win == 0)
			System.out.println("�����ϴ�.");
		else
			System.out.println("����� �̰���ϴ�.");
		
		input.close();
	}
	
}