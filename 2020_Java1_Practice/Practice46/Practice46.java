// 20200988 ��ǻ���а� ������, 46, ��Ⱦ��ε�
import java.util.Scanner;

public class Practice46 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Movie mvObj = new Movie();
		System.out.println("��ȭ������ �Է��ϼ���.");
		System.out.print("��ȭ������? ");
		mvObj.setTitle(input.next());
		System.out.print("������? ");
		mvObj.setScore(input.nextInt());
		System.out.print("������? ");
		mvObj.setDirector(input.next());
		System.out.print("�����⵵��? ");
		mvObj.setYear(input.nextInt());
		
		System.out.println("\n�Է��� ��ȭ�� �����Դϴ�.\n" + mvObj.toString());
		
		input.close();
	}

}
