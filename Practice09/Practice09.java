// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice09 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		int radius, height;
		double volumn;
		final double PI = 3.141592;
		
		System.out.print("������ ������ : ");
		radius = input.nextInt();
		System.out.print("������ ���� : ");
		height = input.nextInt();
		volumn = radius * radius * PI * (double)height / 3;
		System.out.println("������ ���Ǵ� " + volumn);
		
		input.close();
	}
	
}
