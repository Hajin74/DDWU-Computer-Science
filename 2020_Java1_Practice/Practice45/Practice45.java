// 20200988 컴퓨터학과 유하진, 45
import java.util.Scanner;

public class Practice45 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Rectangle recObj = new Rectangle();
		System.out.print("사각형의 가로 : ");
		recObj.setWidth(input.nextInt());
		System.out.print("사각형의 세로 : ");
		recObj.setHeight(input.nextInt());
		
		int tmpWidth = recObj.getWidth();
		int tmpHeight = recObj.getHeight();
		System.out.println("사각형의 가로는 " + tmpWidth + "이고, 세로는 " + tmpHeight + "입니다.");
		System.out.println("사각형의 넓이는 " + recObj.area() + "이고, 둘레는 " + recObj.perimeter() + "입니다.");
		
		input.close();
	}

}
