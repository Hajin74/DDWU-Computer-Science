// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice08 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int m500, m100, m50, m10, change;
		
		System.out.print("�Ž����� �Ѿ�: ");
		change = input.nextInt();
		
		m500 = change / 500;
		change = change % 500;
		System.out.println("500��¥�� ����: " + m500 + "��");
		
		m100 = change / 100;
		change = change % 100;
		System.out.println("100��¥�� ����: " + m100 + "��");
		
		m50 = change / 50;
		change = change % 50;
		System.out.println("50��¥�� ����: " + m50 + "��");
		
		m10 = change / 10;
		change = change % 10;
		System.out.println("100��¥�� ����: " + m10 + "��");
		
		input.close();
	}

}
