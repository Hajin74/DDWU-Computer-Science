// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice09 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int num, sum = 0;
		
		do {
			System.out.print("���ڸ� �Է��ϼ���: ");
			num = input.nextInt();
			
			if(num < 0)
				System.out.println("������ �ԷµǾ����ϴ�. �ٽ� �Է��ϼ���.");
			else
				sum += num;
		} while(num != 0);
		
		System.out.println("�Էµ� ���ڵ��� ���� " + sum + "�Դϴ�.");
		
		input.close();
	}

}
