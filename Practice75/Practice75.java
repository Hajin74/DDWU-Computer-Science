/* 20200988 ��ǻ���а� ������
 * #75
 */
import java.util.Scanner;

public class Practice75 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("�� Ű�� �Է��ϼ���: ");
		int height = input.nextInt();
		System.out.print("�� �����Ը� �Է��ϼ���: ");
		int weight = input.nextInt();
		BodyData b1 = new BodyData();
		b1.setHeight(height);
		b1.setWeight(weight);
		
		System.out.print("\n����� Ű�� �Է��ϼ���: ");
		height = input.nextInt();
		System.out.print("����� �����Ը� �Է��ϼ���: ");
		weight = input.nextInt();
		BodyData b2 = new BodyData();
		b2.setHeight(height);
		b2.setWeight(weight);
		
		if(b1.isTallerThan(b2) == true) {
			System.out.println("\nŰ�� ����� �� Ů�ϴ�.");
		} else {
			System.out.println("\nŰ�� ���� �� Ů�ϴ�.");
		}
		
		if(b1.needDiet() == true) {
			System.out.println("���� ���̾�Ʈ�� �ʿ��մϴ�.");
		} else {
			System.out.println("���� ���̾�Ʈ�� �ʿ����� �ʽ��ϴ�.");
		}
		
		if(b2.needDiet() == true) {
			System.out.println("����� ���̾�Ʈ�� �ʿ��մϴ�.");
		} else {
			System.out.println("����� ���̾�Ʈ�� �ʿ����� �ʽ��ϴ�.");
		}
		
		input.close();
	}
}
