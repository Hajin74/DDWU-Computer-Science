// 20200988 ��ǻ���а� ������, 50
import java.util.Scanner;

public class Practice50 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("������ X��ǥ�� �Է��ϼ���: ");
		int x = input.nextInt();
		System.out.print("������ Y��ǥ�� �Է��ϼ���: ");
		int y = input.nextInt();
		Shape s = new Shape(x, y);
		
		System.out.print("�簢���� X��ǥ�� �Է��ϼ���: ");
		x = input.nextInt();
		System.out.print("�簢���� Y��ǥ�� �Է��ϼ���: ");
		y = input.nextInt();
		System.out.print("�簢���� ���θ� �Է��ϼ���: ");
		int width = input.nextInt();
		System.out.print("�簢���� ���θ� �Է��ϼ���: ");
		int length = input.nextInt();
		Rectangle r = new Rectangle(x, y, length, width);
		
		System.out.print("�ﰢ���� X��ǥ�� �Է��ϼ���: ");
		x = input.nextInt();
		System.out.print("�ﰢ���� Y��ǥ�� �Է��ϼ���: ");
		y = input.nextInt();
		System.out.print("�ﰢ���� �غ��� �Է��ϼ���: ");
		int base = input.nextInt();
		System.out.print("�ﰢ���� ���̸� �Է��ϼ���: ");
		int height = input.nextInt();
		Triangle t = new Triangle(x, y, base, height);

		System.out.println(s.toString());
		s.move();
		System.out.println("-- �̵� �� -- \n" + s.toString());

		r.draw();
		r.move();
		System.out.println("-- �̵� �� --");
		r.draw();
		
		t.draw();
		t.move();
		System.out.println("-- �̵� �� --");
		t.draw();
		
		input.close();

	}

}
