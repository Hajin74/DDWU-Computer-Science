// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice03 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int width, height;
		
		width = input.nextInt();
		height = input.nextInt();
		
		System.out.println("�簢���� ���� : " + width + "\n" + "�簢���� ���� : " + height + "\n" + "�簢���� ���̴� " + (width * height) + "�Դϴ�.");
		input.close();
	}

}
