// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice09 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		int radius, height;
		double volumn;
		final double PI = 3.141592;
		
		System.out.print("원뿔의 반지름 : ");
		radius = input.nextInt();
		System.out.print("원뿔의 높이 : ");
		height = input.nextInt();
		volumn = radius * radius * PI * (double)height / 3;
		System.out.println("원뿔의 부피는 " + volumn);
		
		input.close();
	}
	
}
