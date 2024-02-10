// 20200988 컴퓨터학과 유하진 
import java.util.Scanner;

public class Practice41 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Rectangle recObj = new Rectangle();
		System.out.print("가로 입력: ");
		recObj.width = input.nextInt();		
		System.out.print("세로 입력: ");
		recObj.height = input.nextInt();
		
		System.out.println("면적은 " + recObj.area() + "입니다.");
		System.out.println("둘레는 " + recObj.perimeter() + "입니다.");
		
		input.close();
	}

}
