// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice06 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		final double PI = 3.141592;
		int radius, height;
		double volumn;
		
		System.out.print("������� ������ : ");
		radius = input.nextInt();
		System.out.print("������� ���� : ");
		height = input.nextInt();
		
		volumn = radius * radius * PI * height;
		System.out.println("������� ���Ǵ� : " + volumn);
		
		input.close();
	}

}
