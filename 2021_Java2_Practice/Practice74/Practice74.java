// 20200988 ��ǻ���а� ������, 74
import java.util.Scanner;

public class Practice74 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("������ RandomList�� �����մϴ�.");
		RandomList<Integer> r = new RandomList<Integer>();
		
		int num = 0;
		while(num != 4) {
			System.out.print("���ϴ� ����� �����ϼ��� (1-�߰�/2-���/3-������/4-����): ");
			num = input.nextInt();
			
			if(num == 1) {
				System.out.print("�߰��ϰ� ���� ������ ������ �Է��ϼ���: ");
				int n = input.nextInt();
				
				for(int i = 0; i < n; i++) {
					System.out.print("[" + i + "]�� ����: ");
					r.add(input.nextInt());
				}
			} else if (num == 2) {
				r.print();
			} else if (num == 3) {
				try {
					System.out.println("������ ���� ���: " + r.select());				
				} catch (ImproperArraySizeException e) {
					System.out.println("�Էµ� ���Ұ� ���� �����Դϴ�.");
				}
			} else if (num == 4) {
				System.out.println("���α׷��� �����մϴ�.");				
			}
			
			System.out.println();
		}
		
		
		input.close();
	}

}
