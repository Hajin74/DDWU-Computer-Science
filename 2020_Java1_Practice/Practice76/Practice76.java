/* 20200988 ��ǻ���а� ������
 * #76
 */
import java.util.Scanner;

public class Practice76 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("�簢��1�� ���θ� �Է�: ");
		int width = input.nextInt();
		System.out.print("�簢��1�� ���θ� �Է�: ");
		int height = input.nextInt();
		Rectangle r1 = new Rectangle(width, height);
		
		System.out.print("�簢��2�� ���θ� �Է�: ");
		width = input.nextInt();
		System.out.print("�簢��2�� ���θ� �Է�: ");
		height = input.nextInt();
		Rectangle r2 = new Rectangle(width, height);
		
		boolean rst = r1.isSmallerThan(r2);
		if(rst == true) {
			System.out.println("�簢��1�� ���̰� �� �۽��ϴ�.");
		}
		
		input.close();
	}
}
