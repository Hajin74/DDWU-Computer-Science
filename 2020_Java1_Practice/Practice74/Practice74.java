/* 20200988 ��ǻ���а� ������
 * #74
 */
import java.util.Scanner;

public class Practice74 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("box1 ������ �Է��ϼ���.");
		System.out.print("����: ");
		int x = input.nextInt();
		System.out.print("����: ");
		int y = input.nextInt();
		System.out.print("����: ");
		int z = input.nextInt();
		Box box1 = new Box(x, y, z);
		
		System.out.println("\nbox2 ������ �Է��ϼ���.");
		System.out.print("����: ");
		x = input.nextInt();
		System.out.print("����: ");
		y = input.nextInt();
		System.out.print("����: ");
		z = input.nextInt();
		System.out.print("����: ");
		String att = input.next();
		MaterialBox box2 = new MaterialBox(x, y, z, att);
		
		System.out.println("\nbox3 ������ �Է��ϼ���.");
		System.out.print("����: ");
		x = input.nextInt();
		System.out.print("����: ");
		y = input.nextInt();
		System.out.print("����: ");
		z = input.nextInt();
		System.out.print("����: ");
		att = input.next();
		MaterialBox box3 = new MaterialBox(x, y, z, att);
		
		System.out.println("\nbox1�� �����Դϴ�.");
		System.out.println(box1.toString());
		System.out.println("\nbox2�� �����Դϴ�.");
		System.out.println(box2.toString());
		System.out.println("\nbox3�� �����Դϴ�.");
		System.out.println(box3.toString());
		
		input.close();
	}
}
