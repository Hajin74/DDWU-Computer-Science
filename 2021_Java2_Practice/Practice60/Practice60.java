// 20200988 ��ǻ���а� ������, 60
import java.util.Scanner;

public class Practice60 {

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
	
	static String getInput(Scanner s) throws InvalidInputException {
		String user = s.next();
		
		if(user.equals("����") || user.equals("����") || user.equals("��")) {
			return user;
		} 
		throw(new InvalidInputException());
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		System.out.println("��ǻ���� ����: ����");
		System.out.print("����� �Է�: ");
		
		try {
			String user = getInput(s);	
			
			if(whoswin("����", user) == 0) {
				System.out.println("�����ϴ�.");
			} else if(whoswin("����", user) == 1) {
				System.out.println("����� �̰���ϴ�.");
			} else if(whoswin("����", user) == -1) {
				System.out.println("��ǻ�Ͱ� �̰���ϴ�.");
			}
			
		} catch (InvalidInputException e) {
			System.out.println("�߸��� �Է��Դϴ�.");
			
			return;
		} finally {
			s.close();
		}
	}
	
}
