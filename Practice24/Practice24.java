// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice24 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("������ �Է��ϼ��� : ");
		int num = input.nextInt();
		System.out.println("������ " + num + "�� �Դϴ�.");
		printTimes(num);
		
		input.close();

	}
	
	public static void printTimes(int num) {
		
		for(int i = 1; i <= 9; i++) {
			System.out.println(num + " * " + i + " = " + num * i);
		}
	}

}
