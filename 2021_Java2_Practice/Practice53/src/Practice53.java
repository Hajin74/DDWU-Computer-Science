// 20200988 ��ǻ���а� ������, 53
import java.util.Scanner;

public class Practice53 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Shape list[] = new Shape[3];

		System.out.print("������ X��ǥ�� �Է��ϼ���: ");
		int x = input.nextInt();
		System.out.print("������ Y��ǥ�� �Է��ϼ���: ");
		int y = input.nextInt();
		list[0] = new Shape(x, y);
		
		System.out.print("�簢���� X��ǥ�� �Է��ϼ���: ");
		x = input.nextInt();
		System.out.print("�簢���� Y��ǥ�� �Է��ϼ���: ");
		y = input.nextInt();
		System.out.print("�簢���� ���θ� �Է��ϼ���: ");
		int width = input.nextInt();
		System.out.print("�簢���� ���θ� �Է��ϼ���: ");
		int length = input.nextInt();
		list[1] = new Rectangle(x, y, length, width);
		
		System.out.print("�ﰢ���� X��ǥ�� �Է��ϼ���: ");
		x = input.nextInt();
		System.out.print("�ﰢ���� Y��ǥ�� �Է��ϼ���: ");
		y = input.nextInt();
		System.out.print("�ﰢ���� �غ��� �Է��ϼ���: ");
		int base = input.nextInt();
		System.out.print("�ﰢ���� ���̸� �Է��ϼ���: ");
		int height = input.nextInt();
		list[2] = new Triangle(x, y, base, height);
		
		
		System.out.println("�Էµ� �����Դϴ�.");
		for(int i = 0; i < list.length; i++) {
			System.out.println(i + 1 + ": " + list[i].toString());
		}
		
		System.out.println("\n-- �������� �̵��մϴ� --\n");
		for(int i = 0; i < list.length; i++) {
			list[i].move();
		}
		
		for(int i = 0; i < list.length; i++) {
			System.out.println(i + 1 + ": " + list[i].toString());
		}
		
		input.close();
	}

}
