// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice11 {
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		System.out.print("Ű�� �Է��ϼ���: ");
		double height = input.nextDouble();
		System.out.print("�����Ը� �Է��ϼ���: ");
		double weight = input.nextDouble();
		
		double normal = (height - 100) * 0.9;
		System.out.println("ǥ��ü���� " + normal + "�Դϴ�.");
		
		if(normal > weight) {
			System.out.println("��ü���Դϴ�.");
		} else if(normal == weight) {
			System.out.println("����ü���Դϴ�.");
		} else {
			System.out.println("��ü���Դϴ�.");
		}
				
		input.close();
	}
}
