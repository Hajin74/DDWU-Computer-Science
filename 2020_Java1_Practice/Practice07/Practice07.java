// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice07 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int m500, m100, m50, m10;
		
		System.out.print("500�� ¥���� ����: ");
		m500 = input.nextInt();
		
		System.out.print("100�� ¥���� ����: ");
		m100 = input.nextInt();
		
		System.out.print("50�� ¥���� ����: ");
		m50 = input.nextInt();
		
		System.out.print("10�� ¥���� ����: ");
		m10 = input.nextInt();
		
		int sum = m500 * 500 + m100 * 100 + m50 * 50 + m10 * 10; 
		System.out.println("�����뿡 �ִ� �Ѿ�: " + sum + "��");
		
		input.close();
	}

}
