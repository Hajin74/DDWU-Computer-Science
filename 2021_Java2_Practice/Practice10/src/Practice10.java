// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice10 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int num, sum = 0, big = 0;
		
		do {
			System.out.print("���ڸ� �Է��ϼ���: ");
			num = input.nextInt();
			
			if(num < 0) {
				System.out.println("������ �ԷµǾ����ϴ�. �ٽ� �Է��ϼ���.");				
			} else if (num > 0) {
				big++;
				sum += num;
			} else {
				sum += num;				
			}
			
		} while(num != 0);
		
		System.out.println("�Էµ� ���ڵ��� ���� " + sum + "�Դϴ�.");
		System.out.println("�Էµ� ���ڵ� �߿��� 0���� ū ������ ������ " + big + "�Դϴ�.");
		
		double average = (double)sum / big;
		System.out.println("�Էµ� ���ڵ��� ����� " + average + "�Դϴ�.");
		
		input.close();

	}

}
