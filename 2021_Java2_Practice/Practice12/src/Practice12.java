// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice12 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("������ �Է��ϼ���: ");
		int num = input.nextInt();
		
		while(num <= 0) {
			System.out.println("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.");
			System.out.print("������ �Է��ϼ���: ");
			num = input.nextInt();
		}
		
		int count = 0;
		for(int i = 1; i <= num; i++) {
			if(i % 5 != 0) {
				count++;
				if(count % 7 == 0) {
					System.out.print(i + "\n");
				} else {
					System.out.print(i + "\t");
				}
			} else {
				continue;
			}
		}
		
		input.close();
	}

}
