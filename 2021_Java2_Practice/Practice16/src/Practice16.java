// ��ǻ���а� 20200988 ������
import java.util.Scanner;
import java.util.Random;

public class Practice16 {
	
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
		
		int win = 0, lose = 0, draw = 0;
		int randomNum;
		String com;
		String user;
		
		
		do {
			System.out.println("���� ����� ����: " + win + "�� " + lose + "�� " + draw + "��");
			
			randomNum = rg.nextInt(3);
			if(randomNum == 0)
				com = "����";
			else if(randomNum == 1)
				com = "����";
			else
				com = "��";
			System.out.println("��ǻ���� ����: " + com);
			
			do {
				System.out.print("����� �Է�(����/����/��/�׸�): ");
				user = input.next();	
				
				if(!(user.equals("����") || user.equals("����") || user.equals("��") || user.equals("�׸�"))) {
					System.out.println("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.");
				}
			} while(!(user.equals("����") || user.equals("����") || user.equals("��") || user.equals("�׸�")));
			
			int winner;
			if(user.equals("�׸�")) {
				System.out.println("���α׷��� �����մϴ�.");
			} else {
				winner = whoswin(com, user);
				
				if(winner == -1) {
					System.out.println("��ǻ�Ͱ� �̰���ϴ�.");
					lose++;
				} else if(winner == 0) {
					System.out.println("�����ϴ�.");
					draw++;
				}
				else {
					System.out.println("����� �̰���ϴ�.");
					win++;
				}
			}
		} while(!user.equals("�׸�"));
		
		input.close();
	}

}