// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice13 {
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		System.out.print("x ���� �Է��ϼ��� :");
		double x = input.nextDouble();
		
		double result;
		if(x <= 0)
		{
			result = (x * x * x) - (9 * x) + 2;
		}
		else
		{
			result = 7 * x + 2;
		}
		
		System.out.println("f(x) = " + result);
		
		input.close();
	}

}
