// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice02 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("ȭ�� �µ��� �Է��ϼ���: ");
		int f = input.nextInt();
		double c = ((double)5/9) * (f-32);
		System.out.println("�ش��ϴ� ���� �µ��� " + c + "�Դϴ�.");
		
		
		input.close();
	}

}
