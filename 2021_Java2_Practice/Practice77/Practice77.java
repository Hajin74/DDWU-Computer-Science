// 20200988 ��ǻ���а� ������, 77
import java.util.Scanner;

public class Practice77 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		// c1, 1�� ������
		System.out.println("ù ��° �� c1�� �����Դϴ�.");
		Circle c1 = new Circle();
		System.out.println(c1.toString());
		
		// c2, 2�� ������
		System.out.println("\n�� ��° �� c2�� ������ �Է� �޽��ϴ�.");
		System.out.print("�߽���ǥ�� X���� �Է��ϼ���: ");
		int x = sc.nextInt();
		System.out.print("�߽���ǥ�� Y���� �Է��ϼ���: ");
		int y = sc.nextInt();
		System.out.print("������ ���� �Է��ϼ���: ");
		int r = sc.nextInt();
		
		Circle c2 = new Circle(x, y, r);
		
		System.out.println("\n�� ��° �� c2�� �����Դϴ�.");
		System.out.println(c2.toString());
		
		// c3, 3�� ������
		System.out.println("\n�� ��° �� c3�� �����Դϴ�.");
		
		Point p1 = new Point(); // �Ű������� �� Point��ü �����
		p1.setX(60);
		p1.setY(70);
		
		Circle c3 = new Circle(p1, 80);
		
		System.out.println(c3.toString());
		
		// c4, 3�� ������
		System.out.println("\n�� ��° �� c4�� ������ �Է� �޽��ϴ�.");
		System.out.print("�߽���ǥ�� X���� �Է��ϼ���: ");
		x = sc.nextInt();
		System.out.print("�߽���ǥ�� Y���� �Է��ϼ���: ");
		y = sc.nextInt();
		System.out.print("������ ���� �Է��ϼ���: ");
		r = sc.nextInt();
		
		Point p2 = new Point(); // �Ű������� �� Point��ü �����
		p2.setX(x);
		p2.setY(y);
		
		Circle c4 = new Circle(p2, r);
		
		System.out.println("\n�� ��° �� c4�� �����Դϴ�.");
		System.out.println(c4.toString());
		
		// �ٽ� �� �� c1 ~ c4 ���
		System.out.println("\nù ��° �� c1�� �����Դϴ�.");
		System.out.println(c1.toString());
		
		System.out.println("\n�� ��° �� c2�� �����Դϴ�.");
		System.out.println(c2.toString());
		
		System.out.println("\n�� ��° �� c3�� �����Դϴ�.");
		System.out.println(c3.toString());
		
		System.out.println("\n�� ��° �� c4�� �����Դϴ�.");
		System.out.println(c4.toString());
		
		sc.close();
	}

}
