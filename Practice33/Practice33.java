// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice33 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		Rectangle rectangleObj = new Rectangle();
		System.out.print("가로 입력: ");
		rectangleObj.width = input.nextInt(); 
		System.out.print("세로 입력: ");
		rectangleObj.height = input.nextInt(); 
		
		int area = rectangleObj.width * rectangleObj.height;
		System.out.println("면적은 " + area + "입니다.");
		int perimeter = 2 * (rectangleObj.width + rectangleObj.height);
		System.out.println("면적은 " + perimeter + "입니다.");
		
		input.close();
	}

}
