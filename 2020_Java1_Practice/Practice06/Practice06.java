// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice06 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		final double PI = 3.141592;
		int radius, height;
		double volumn;
		
		System.out.print("원기둥의 반지름 : ");
		radius = input.nextInt();
		System.out.print("원기둥의 높이 : ");
		height = input.nextInt();
		
		volumn = radius * radius * PI * height;
		System.out.println("원기둥의 부피는 : " + volumn);
		
		input.close();
	}

}
