// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice03 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("��ġ ���� �Է��ϼ���: ");
		float inch = input.nextFloat();
		int cm = (int)(2.54 * inch);
		System.out.println("�ش��ϴ� ��Ƽ���� ���� " + cm + "�Դϴ�.");
		
		input.close();
	}

}
