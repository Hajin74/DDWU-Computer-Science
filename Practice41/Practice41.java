// 20200988 ��ǻ���а� ������ 
import java.util.Scanner;

public class Practice41 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Rectangle recObj = new Rectangle();
		System.out.print("���� �Է�: ");
		recObj.width = input.nextInt();		
		System.out.print("���� �Է�: ");
		recObj.height = input.nextInt();
		
		System.out.println("������ " + recObj.area() + "�Դϴ�.");
		System.out.println("�ѷ��� " + recObj.perimeter() + "�Դϴ�.");
		
		input.close();
	}

}
