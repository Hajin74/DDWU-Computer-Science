// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice04 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("������ �Է��ϼ���: ");
		int num = input.nextInt();
		
		if(num <= 0) {
			System.out.println("�Է��� ���� " + num + "�� �����Դϴ�.");
		} else {
			if(num % 2 == 0) {
				System.out.println("�Է��� ���� " + num + "�� ¦���Դϴ�.");
			} else {
				System.out.println("�Է��� ���� " + num + "�� Ȧ���Դϴ�.");
			}
		}
		
		input.close();
	}

}
