// 20200988 ��ǻ���а� ������, 54
import java.util.Scanner;

public class Practice54 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("������ ������� ������ �Է��ϼ���.");
		Plane p1 = new Plane();
		System.out.print("�ĺ���ȣ: ");
		p1.setId(input.nextInt());
		System.out.print("��: ");
		p1.setModel(input.next());
		System.out.print("�°� ��: ");
		p1.setCapacity(input.nextInt());
		
		System.out.println("������ ������� �����Դϴ�.");
		String r1 = p1.toString();
		System.out.println(r1);
		System.out.println("������� �߰��� ������ ��� " + Plane.getPlanes() + "�� �Դϴ�.");
		
		System.out.println("\n������ ������� ������ �Է��ϼ���.");
		System.out.print("�ĺ���ȣ : ");
		int id2 = input.nextInt();
		System.out.print("�� : ");
		String model2 = input.next();
		System.out.print("�°� �� : ");
		int capacity2 = input.nextInt();
		Plane p2 = new Plane(id2, model2, capacity2);
		
		
		System.out.println("������ ������� �����Դϴ�.");
		String r2 = p2.toString();
		System.out.println(r2);
		System.out.println("������� �߰��� ������ ��� " + Plane.getPlanes() + "�� �Դϴ�.");
		
		input.close();
	}

}
