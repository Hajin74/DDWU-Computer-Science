/* 20200988 ��ǻ���а� ������
 * #82
 */
import java.util.Scanner;

public class Practice82 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("������ X��ǥ�� �Է��ϼ���: ");
		int x = input.nextInt();
		System.out.print("������ Y��ǥ�� �Է��ϼ���: ");
		int y = input.nextInt();
		Shape s0 = new Shape(x, y);
		
		System.out.print("\n�簢���� X��ǥ�� �Է��ϼ���: ");
		x = input.nextInt();
		System.out.print("�簢���� Y��ǥ�� �Է��ϼ���: ");
		y = input.nextInt();
		System.out.print("�簢���� ���θ� �Է��ϼ���: ");
		int width = input.nextInt();
		System.out.print("�簢���� ���θ� �Է��ϼ���: ");
		int length = input.nextInt();
		Rectangle r0 = new Rectangle(x, y, width, length);
		
		System.out.print("\n�ﰢ���� X��ǥ�� �Է��ϼ���: ");
		x = input.nextInt();
		System.out.print("�ﰢ���� Y��ǥ�� �Է��ϼ���: ");
		y = input.nextInt();
		System.out.print("�ﰢ���� �غ��� �Է��ϼ���: ");
		int base = input.nextInt();
		System.out.print("�ﰢ���� ���̸��Է��ϼ���: ");
		int height = input.nextInt();
		Triangle t0 = new Triangle(x, y, base, height);
		
		System.out.println("\n" + s0.toString());
		System.out.println("\n" + r0.toString());
		System.out.println("\n" + t0.toString());
		
		input.close();
	}
}
