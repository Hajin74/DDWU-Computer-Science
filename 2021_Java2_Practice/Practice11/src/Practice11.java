// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice11 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
				
		while(true) {
			System.out.print("���ڸ� �Է��ϼ���: ");
			int num = input.nextInt();
			
			if(num <= 0) {
				System.out.println("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.");
			} else if (num == 1) {
				System.out.println("�Էµ� ���� 1�� �Ҽ��� �ƴմϴ�.\n");
				break;
			} else {
				boolean isPrime = true;
				
				for(int i = 2; i < num; i++) {
					if(num % i == 0) {
						isPrime = false;
					}
				}
				
				if(isPrime) {
					System.out.println("�Էµ� ���� " + num + "�� �Ҽ��Դϴ�.");
				} else {
					System.out.println("�Էµ� ���� " + num + "�� �Ҽ��� �ƴմϴ�.");
				}
				
				break;
			}
		}

		input.close();
	}

}
