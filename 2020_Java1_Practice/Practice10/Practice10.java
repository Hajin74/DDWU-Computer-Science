// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice10 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("ȭ���µ��� �Է��ϼ��� : ");
		int fahrenheit = input.nextInt();
		double celsius = ((double)fahrenheit - 32) * 5 / 9;
		System.out.println("ȭ�� " + fahrenheit + "���� ���� " + celsius + "�� �ش��մϴ�.");

		input.close();
	}

}
