/* 20200988 컴퓨터학과 유하진
 * #82
 */
import java.util.Scanner;

public class Practice82 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("도형의 X좌표를 입력하세요: ");
		int x = input.nextInt();
		System.out.print("도형의 Y좌표를 입력하세요: ");
		int y = input.nextInt();
		Shape s0 = new Shape(x, y);
		
		System.out.print("\n사각형의 X좌표를 입력하세요: ");
		x = input.nextInt();
		System.out.print("사각형의 Y좌표를 입력하세요: ");
		y = input.nextInt();
		System.out.print("사각형의 가로를 입력하세요: ");
		int width = input.nextInt();
		System.out.print("사각형의 세로를 입력하세요: ");
		int length = input.nextInt();
		Rectangle r0 = new Rectangle(x, y, width, length);
		
		System.out.print("\n삼각형의 X좌표를 입력하세요: ");
		x = input.nextInt();
		System.out.print("삼각형의 Y좌표를 입력하세요: ");
		y = input.nextInt();
		System.out.print("삼각형의 밑변을 입력하세요: ");
		int base = input.nextInt();
		System.out.print("삼각형의 높이를입력하세요: ");
		int height = input.nextInt();
		Triangle t0 = new Triangle(x, y, base, height);
		
		System.out.println("\n" + s0.toString());
		System.out.println("\n" + r0.toString());
		System.out.println("\n" + t0.toString());
		
		input.close();
	}
}
