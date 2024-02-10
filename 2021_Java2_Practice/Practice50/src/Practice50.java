// 20200988 컴퓨터학과 유하진, 50
import java.util.Scanner;

public class Practice50 {

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

		System.out.println(s.toString());
		s.move();
		System.out.println("-- 이동 후 -- \n" + s.toString());

		r.draw();
		r.move();
		System.out.println("-- 이동 후 --");
		r.draw();
		
		t.draw();
		t.move();
		System.out.println("-- 이동 후 --");
		t.draw();
		
		input.close();

	}

}
