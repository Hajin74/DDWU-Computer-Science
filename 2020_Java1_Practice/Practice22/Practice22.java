// ��ǻ���а� 20200988 ������
import java.util.Scanner;
public class Practice22 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("������ �Է��ϼ��� : ");
		int num = input.nextInt();
		int absNum = abs(num);
		System.out.println("�Էµ� ���� " + num + "�� ���밪�� " + absNum +"�Դϴ�.");
		
		input.close();
	}
	
	public static int abs(int num) {
		
		if(num > 0) {
			return num;			
		} else {
			return -num;
		}
		
	}

}
