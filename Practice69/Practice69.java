// 20200988 ��ǻ���а� ������
// 69
import java.util.Scanner;

public class Practice69 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("������ ������ �Է��ϼ���.");
		Shape s0 = new Shape();
		System.out.print("�߽���ǥ�� X��: ");
		s0.setX(input.nextInt());
		System.out.print("�߽���ǥ�� Y��: ");
		s0.setY(input.nextInt());
		
		System.out.println("\n�簢���� ������ �Է��ϼ���.");
		System.out.print("�߽���ǥ�� X��: ");
		int x = input.nextInt();
		System.out.print("�߽���ǥ�� Y��: ");
		int y = input.nextInt();
		System.out.print("���α���: ");
		int width = input.nextInt();
		System.out.print("���α���: ");
		int height = input.nextInt();
		Rectangle r0 = new Rectangle(width, height);
		r0.setX(x);
		r0.setY(y);
		
		System.out.println("\n������� ������ ������ ������ �����ϴ�.");
		System.out.println(s0.toString());
		r0.printInfo();
		
		input.close();
		
	}
}
