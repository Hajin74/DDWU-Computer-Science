// 20200988 ��ǻ���а� ������
import java.util.Scanner;

public class Practice31 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		BodyDate b1 = new BodyDate();
		
		System.out.print("�� Ű�� �Է��ϼ���: ");
		int height = input.nextInt();
		b1.setHeight(height);
		System.out.print("�� �����Ը� �Է��ϼ���: ");
		int weight = input.nextInt();
		b1.setWeight(weight);
		
		BodyDate b2 = new BodyDate();
		
		System.out.print("����� Ű�� �Է��ϼ���: ");
		height = input.nextInt();
		b2.setHeight(height);
		System.out.print("����� �����Ը� �Է��ϼ���: ");
		weight = input.nextInt();
		b2.setWeight(weight);
		
		if(!b1.isTallerThan(b2)) {
			System.out.println("Ű�� ����� �� Ů�ϴ�.");
		} else {
			if(b1.getHeight() > b2.getHeight()) {
				System.out.println("Ű�� ���� �� Ů�ϴ�.");
			} else {
				System.out.println("���� ����� Ű�� �����ϴ�.");
			}
		}
		
		if(b1.needDiet()) {
			System.out.println("���� ���̾�Ʈ�� �ʿ��մϴ�.");
		} else {
			System.out.println("���� ���̾�Ʈ�� �ʿ����� �ʽ��ϴ�.");
		}
		
		if(b2.needDiet()) {
			System.out.println("����� ���̾�Ʈ�� �ʿ��մϴ�.");
		} else {
			System.out.println("����� ���̾�Ʈ�� �ʿ����� �ʽ��ϴ�.");
		}
				
		input.close();
	}

}
