// 20200988 ��ǻ���а� ������, 56
import java.util.Scanner;

public class Practice56 {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int num1 = 0, num2 = 0;
		
		boolean isDone = false;
		
		while(isDone != true) {
			try {
				System.out.print("1�� �ǿ����ڸ� �Է��ϼ���: ");
				String str = s.next();
		
				num1 = Integer.parseInt(str);
			} catch (NumberFormatException e) {
				System.out.println("�߸��� ������ �����Դϴ�. �ٽ� �Է��ϼ���.");
				continue;
			} 
			isDone = true;
		}
		
		
		
		isDone = false;
		while(isDone != true) {
			try {
				System.out.print("2�� �ǿ����ڸ� �Է��ϼ���: ");
				String str = s.next();
		
				num2 = Integer.parseInt(str);
			} catch (NumberFormatException e) {
				System.out.println("�߸��� ������ �����Դϴ�. �ٽ� �Է��ϼ���.");
				continue;
			}
			isDone = true;
		}
		
		System.out.println(num1 + " + " + num2 + " = " + (num1 + num2));
				
		s.close();
	}

}
