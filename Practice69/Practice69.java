// 20200988 컴퓨터학과 유하진
// 69
import java.util.Scanner;

public class Practice69 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("도형의 정보를 입력하세요.");
		Shape s0 = new Shape();
		System.out.print("중심좌표의 X값: ");
		s0.setX(input.nextInt());
		System.out.print("중심좌표의 Y값: ");
		s0.setY(input.nextInt());
		
		System.out.println("\n사각형의 정보를 입력하세요.");
		System.out.print("중심좌표의 X값: ");
		int x = input.nextInt();
		System.out.print("중심좌표의 Y값: ");
		int y = input.nextInt();
		System.out.print("가로길이: ");
		int width = input.nextInt();
		System.out.print("세로길이: ");
		int height = input.nextInt();
		Rectangle r0 = new Rectangle(width, height);
		r0.setX(x);
		r0.setY(y);
		
		System.out.println("\n만들어진 도형의 정보는 다음과 같습니다.");
		System.out.println(s0.toString());
		r0.printInfo();
		
		input.close();
		
	}
}
