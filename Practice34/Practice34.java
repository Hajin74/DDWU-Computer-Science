// 컴퓨터학과 20200988 유하진
import java.util.Scanner;
public class Practice34 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Rectangle rec1 = new Rectangle();
		
		System.out.println("첫 번째 사각형의 정보를 입력하세요.");
		System.out.print("가로 입력: ");
		rec1.width = input.nextInt();
		System.out.print("세로 입력: ");
		rec1.height = input.nextInt();
		
		Rectangle rec2 = new Rectangle();
		
		System.out.println("첫 번째 사각형의 정보를 입력하세요.");
		System.out.print("가로 입력: ");
		rec2.width = input.nextInt();
		System.out.print("세로 입력: ");
		rec2.height = input.nextInt();
		
		int area1 = rec1.width * rec1.height; 
		System.out.println("첫 번째 사각형의 면적은 " + area1 + "입니다.");
		int perimeter1 = 2 * (rec1.width + rec1.height);
		System.out.println("첫 번째 사각형의 둘레는 " + perimeter1 + "입니다.");
		
		int area2 = rec2.width * rec2.height; 
		System.out.println("두 번째 사각형의 면적은 " + area2 + "입니다.");
		int perimeter2 = 2 * (rec2.width + rec2.height);
		System.out.println("두 번째 사각형의 둘레는 " + perimeter2 + "입니다.");
	
		input.close();
	}

}
