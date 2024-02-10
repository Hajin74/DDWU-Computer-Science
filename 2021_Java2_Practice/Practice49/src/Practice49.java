// 20200988 컴퓨터학과 유하진, 49
import java.util.Scanner;

public class Practice49 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("도형의 X좌표를 입력하세요: ");
		int x = input.nextInt();
		System.out.print("도형의 Y좌표를 입력하세요: ");
		int y = input.nextInt();
		Shape s = new Shape(x, y);
		
		System.out.print("사각형의 X좌표를 입력하세요: ");
		x = input.nextInt();
		System.out.print("사각형의 Y좌표를 입력하세요: ");
		y = input.nextInt();
		System.out.print("사각형의 가로를 입력하세요: ");
		int width = input.nextInt();
		System.out.print("사각형의 세로를 입력하세요: ");
		int length = input.nextInt();
		Rectangle r = new Rectangle(x, y, length, width);
		
		System.out.print("삼각형의 X좌표를 입력하세요: ");
		x = input.nextInt();
		System.out.print("삼각형의 Y좌표를 입력하세요: ");
		y = input.nextInt();
		System.out.print("삼각형의 밑변을 입력하세요: ");
		int base = input.nextInt();
		System.out.print("삼각형의 높이를 입력하세요: ");
		int height = input.nextInt();
		Triangle t = new Triangle(x, y, base, height);

		System.out.println("입력된 도형의 정보입니다.\n" + s.toString());
		s.move();
		System.out.println("-- 이동 후 -- \n" + s.toString());

		System.out.println("입력된 사각형의 정보입니다.\n" + r.toString());
		r.move();
		System.out.println("-- 이동 후 -- \n" + r.toString());
		
		System.out.println("입력된 삼각형의 정보입니다.\n" + t.toString());
		t.move();
		System.out.println("-- 이동 후 -- \n" + t.toString());
		
		input.close();
	}

}
