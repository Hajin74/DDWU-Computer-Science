// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice36 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Movie mv1 = new Movie();
		System.out.println("��ȭ������ �Է��ϼ���.");
		System.out.print("��ȭ������? ");
		mv1.title = input.next();
		System.out.print("������? ");
		mv1.score = input.nextInt();
		System.out.print("������? ");
		mv1.director = input.next();
		System.out.print("���� �⵵��? ");
		mv1.year = input.nextInt();
		
		Movie mv2 = new Movie();
		System.out.println("��ȭ������ �Է��ϼ���.");
		System.out.print("��ȭ������? ");
		mv2.title = input.next();
		System.out.print("������? ");
		mv2.score = input.nextInt();
		System.out.print("������? ");
		mv2.director = input.next();
		System.out.print("���� �⵵��? ");
		mv2.year = input.nextInt();
		
		input.close();
	}

}
