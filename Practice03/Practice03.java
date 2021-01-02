// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice03 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int width, height;
		
		width = input.nextInt();
		height = input.nextInt();
		
		System.out.println("사각형의 가로 : " + width + "\n" + "사각형의 세로 : " + height + "\n" + "사각형의 넓이는 " + (width * height) + "입니다.");
		input.close();
	}

}
