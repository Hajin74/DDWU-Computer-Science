// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice23 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("�̸��� �Է��ϼ��� : ");
		String name = input.next();
		greeting(name);
		
		input.close();
	}
	
	public static void greeting (String user) {
		
		System.out.println(user + "��, ���� ��ħ�Դϴ�.");
		
	}

}
