// 20200988 ��ǻ���а� ������, 44
import java.util.Scanner;

public class Practice44 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("���ϴ� ����� �����ϼ���(1-����, 2-�Ǽ�): ");
		int flag = input.nextInt();
		
		if(flag == 1) {
			System.out.print("��հ��� ���ϴ� ������ ������ �Է��ϼ���: ");
			int num = input.nextInt();
			if(num == 2) {
				int num1, num2;
				System.out.print("1�� ������ �Է��ϼ���: ");
				num1 = input.nextInt();
				System.out.print("2�� ������ �Է��ϼ���: ");
				num2 = input.nextInt();
				
				Average obj1 = new Average();
				int ave1 = obj1.getAverage(num1, num2);
				System.out.println("2���� ������ ����� " + ave1 + "�Դϴ�.");
			}
			if(num == 3) {
				int num1, num2, num3;
				System.out.print("1�� ������ �Է��ϼ���: ");
				num1 = input.nextInt();
				System.out.print("2�� ������ �Է��ϼ���: ");
				num2 = input.nextInt();
				System.out.print("3�� ������ �Է��ϼ���: ");
				num3 = input.nextInt();
				
				Average obj2 = new Average();
				int ave2 = obj2.getAverage(num1, num2, num3);
				System.out.println("3���� ������ ����� " + ave2 + "�Դϴ�.");
			}
		} else {
			System.out.print("��հ��� ���ϴ� �Ǽ��� ������ �Է��ϼ���: ");
			double num = input.nextDouble();
			if(num == 2) {
				double num1, num2;
				System.out.print("1�� ������ �Է��ϼ���: ");
				num1 = input.nextDouble();
				System.out.print("2�� ������ �Է��ϼ���: ");
				num2 = input.nextDouble();
				
				Average obj3 = new Average();
				double ave3 = obj3.getAverage(num1, num2);
				System.out.println("2���� ������ ����� " + ave3 + "�Դϴ�.");
			}
			if(num == 3) {
				double num1, num2, num3;
				System.out.print("1�� ������ �Է��ϼ���: ");
				num1 = input.nextDouble();
				System.out.print("2�� ������ �Է��ϼ���: ");
				num2 = input.nextDouble();
				System.out.print("3�� ������ �Է��ϼ���: ");
				num3 = input.nextDouble();
				
				Average obj4 = new Average();
				double ave4 = obj4.getAverage(num1, num2, num3);
				System.out.println("3���� ������ ����� " + ave4 + "�Դϴ�.");
			}
		}
		input.close();
	}

}
