// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice05 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int money, total, change, tax;
		
		System.out.print("���� �� : ");
		money = input.nextInt();
		
		System.out.print("��ǰ�� �Ѿ� : ");
		total = input.nextInt();
		
		tax = (int)(total * 0.1);
		System.out.print("�ΰ��� : " + tax + "\n");
		
		change = money - total;
		System.out.print("�ܵ� : " + change);
		
		input.close();
	}

}
