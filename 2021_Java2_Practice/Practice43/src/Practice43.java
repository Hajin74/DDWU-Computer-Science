// 20200988 ��ǻ���а� ������, 43
import java.util.Scanner;

public class Practice43 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("������ X��ǥ�� �Է��ϼ���: ");
		int x = input.nextInt();
		System.out.print("������ Y��ǥ�� �Է��ϼ���: ");
		int y = input.nextInt();
		//Shape s = new Shape(x, y);
		//�߻�Ŭ������ ��ü�� ������ �� ���� Ŭ����
		
		System.out.print("�簢���� X��ǥ�� �Է��ϼ���: ");
		x = input.nextInt();
		System.out.print("�簢���� Y��ǥ�� �Է��ϼ���: ");
		y = input.nextInt();
		System.out.print("�簢���� ���θ� �Է��ϼ���: ");
		double width = input.nextDouble();
		System.out.print("�簢���� ���θ� �Է��ϼ���: ");
		double length = input.nextDouble();
		Rectangle r = new Rectangle(x, y, length, width);
		
		System.out.print("�ﰢ���� X��ǥ�� �Է��ϼ���: ");
		x = input.nextInt();
		System.out.print("�ﰢ���� Y��ǥ�� �Է��ϼ���: ");
		y = input.nextInt();
		System.out.print("�ﰢ���� ���θ� �Է��ϼ���: ");
		double base = input.nextDouble();
		System.out.print("�ﰢ���� ���θ� �Է��ϼ���: ");
		double height = input.nextDouble();
		Triangle t = new Triangle(x, y, base, height);
		
		System.out.println("�Էµ� ������ �����Դϴ�.");
		//System.out.println(s.toString());
		//��ü�� ������ �� ���� �߻� Ŭ����
		
		System.out.println("�Էµ� �簢���� �����Դϴ�.");
		System.out.println(r.toString());
		
		System.out.println("�Էµ� �ﰢ���� �����Դϴ�.");
		System.out.println(t.toString());
		
		input.close();

	}

}
