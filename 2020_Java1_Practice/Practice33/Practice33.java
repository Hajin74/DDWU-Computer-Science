// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice33 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		Rectangle rectangleObj = new Rectangle();
		System.out.print("���� �Է�: ");
		rectangleObj.width = input.nextInt(); 
		System.out.print("���� �Է�: ");
		rectangleObj.height = input.nextInt(); 
		
		int area = rectangleObj.width * rectangleObj.height;
		System.out.println("������ " + area + "�Դϴ�.");
		int perimeter = 2 * (rectangleObj.width + rectangleObj.height);
		System.out.println("������ " + perimeter + "�Դϴ�.");
		
		input.close();
	}

}
