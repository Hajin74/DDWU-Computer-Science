// ��ǻ���а� 20200988 ������
import java.util.Scanner;
public class Practice34 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Rectangle rec1 = new Rectangle();
		
		System.out.println("ù ��° �簢���� ������ �Է��ϼ���.");
		System.out.print("���� �Է�: ");
		rec1.width = input.nextInt();
		System.out.print("���� �Է�: ");
		rec1.height = input.nextInt();
		
		Rectangle rec2 = new Rectangle();
		
		System.out.println("ù ��° �簢���� ������ �Է��ϼ���.");
		System.out.print("���� �Է�: ");
		rec2.width = input.nextInt();
		System.out.print("���� �Է�: ");
		rec2.height = input.nextInt();
		
		int area1 = rec1.width * rec1.height; 
		System.out.println("ù ��° �簢���� ������ " + area1 + "�Դϴ�.");
		int perimeter1 = 2 * (rec1.width + rec1.height);
		System.out.println("ù ��° �簢���� �ѷ��� " + perimeter1 + "�Դϴ�.");
		
		int area2 = rec2.width * rec2.height; 
		System.out.println("�� ��° �簢���� ������ " + area2 + "�Դϴ�.");
		int perimeter2 = 2 * (rec2.width + rec2.height);
		System.out.println("�� ��° �簢���� �ѷ��� " + perimeter2 + "�Դϴ�.");
	
		input.close();
	}

}
