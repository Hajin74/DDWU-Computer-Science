// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice12 {

	public static void main(String[] args) {

		Scanner input = new Scanner(System.in);
		System.out.print("ù ��° ���ڸ� �Է��ϼ��� : ");
		int n1 = input.nextInt();
		System.out.print("�� ��° ���ڸ� �Է��ϼ��� : ");
		int n2 = input.nextInt();
		System.out.print("�� ��° ���ڸ� �Է��ϼ��� : ");
		int n3 = input.nextInt();
		
		int min;
		if(n2 <= n1 && n2 <= n3) {
			min = n2;
		} else if(n3 <= n1 && n3 <= n2) {
			min = n3;
		} else {
			min = n1;
		}
		
		System.out.println("���� ���� ���ڴ� " + min + "�Դϴ�.");
		input.close();
	}

}
