// 20200988 ��ǻ���а� ������, 52
import java.util.Scanner;

public class Practice52 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Movie m1 = new Movie();
		System.out.println("����Ʈ ��ȭ�� �����Դϴ�.");
		System.out.println(m1.toString());
		
		Movie m2 = new Movie();
		System.out.println("��ȭ������ �Է��ϼ���.");
		System.out.print("��ȭ������? ");
		m2.setTitle(input.next());
		System.out.print("������? ");
		m2.setDirector(input.next());
		System.out.print("���۳⵵��? ");
		m2.setYear(input.nextInt());
		System.out.print("������? ");
		m2.setScore(input.nextInt());
		
		System.out.println("\n�Է��� ��ȭ�� �����Դϴ�.");
		System.out.println(m2.toString());
		
		input.close();
	}
}
