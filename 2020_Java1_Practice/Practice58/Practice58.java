// 20200988 ��ǻ���а� ������
import java.util.Scanner;

public class Practice58 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("Shape ��ü ������ �Է��ϼ���.");
		Shape s1 = new Shape();
		System.out.print("x��ǥ : ");
		s1.x = input.nextInt();
		System.out.print("y��ǥ : ");
		s1.y = input.nextInt();
		
		System.out.println("\nù��° Circle ��ü ������ �Է��ϼ���.");
		System.out.print("x��ǥ : ");
		int x1 = input.nextInt();
		System.out.print("y��ǥ : ");
		int y1 = input.nextInt();
		System.out.print("������ : ");
		int r1 = input.nextInt();
		Circle c1 = new Circle(r1);
		c1.x = x1;
		c1.y = y1;
		
		System.out.println("\n�ι�° Circle ��ü ������ �Է��ϼ���.");
		System.out.print("x��ǥ : ");
		int x2 = input.nextInt();
		System.out.print("y��ǥ : ");
		int y2 = input.nextInt();
		System.out.print("������ : ");
		int r2 = input.nextInt();
		Circle c2 = new Circle(r2);
		c2.x = x2;
		c2.y = y2;
		
		System.out.println("\nShape ��ü �����Դϴ�.");
		s1.print();
		System.out.println("ù��° Circle ��ü �����Դϴ�.");
		c1.draw();
		System.out.println("�ι�° Circle ��ü �����Դϴ�.");
		c2.draw();
		
		System.out.println();
		
		if(compareArea(c1, c2) == 1) {
			System.out.println("ù��° ���� ������ �� �н��ϴ�.");
		} else if(compareArea(c1, c2) == -1) {
			System.out.println("�ι�° ���� ������ �� �н��ϴ�.");
		} else {
			System.out.println("�� ���� ������ �����ϴ�.");
		}
		
		input.close();
	}
	
	public static int compareArea(Circle c1, Circle c2) {
		if(c1.calcArea() > c2.calcArea()) {
			return 1;
		} else if(c1.calcArea() < c2.calcArea()) {
			return -1;
		} else {
			return 0;
		}
	}
}
