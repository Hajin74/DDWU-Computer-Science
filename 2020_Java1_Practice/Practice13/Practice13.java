// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice13 {
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		System.out.print("x 값을 입력하세요 :");
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
