// 20200988 ��ǻ���а� ������, 45
import java.util.Scanner;

public class Practice45 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Rectangle recObj = new Rectangle();
		System.out.print("�簢���� ���� : ");
		recObj.setWidth(input.nextInt());
		System.out.print("�簢���� ���� : ");
		recObj.setHeight(input.nextInt());
		
		int tmpWidth = recObj.getWidth();
		int tmpHeight = recObj.getHeight();
		System.out.println("�簢���� ���δ� " + tmpWidth + "�̰�, ���δ� " + tmpHeight + "�Դϴ�.");
		System.out.println("�簢���� ���̴� " + recObj.area() + "�̰�, �ѷ��� " + recObj.perimeter() + "�Դϴ�.");
		
		input.close();
	}

}
