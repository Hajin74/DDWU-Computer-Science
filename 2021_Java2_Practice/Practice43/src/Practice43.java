// 20200988 컴퓨터학과 유하진, 43
import java.util.Scanner;

public class Practice43 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("도형의 X좌표를 입력하세요: ");
		int x = input.nextInt();
		System.out.print("도형의 Y좌표를 입력하세요: ");
		int y = input.nextInt();
		//Shape s = new Shape(x, y);
		//추상클래스는 객체를 생성할 수 없는 클래스
		
		System.out.print("사각형의 X좌표를 입력하세요: ");
		x = input.nextInt();
		System.out.print("사각형의 Y좌표를 입력하세요: ");
		y = input.nextInt();
		System.out.print("사각형의 가로를 입력하세요: ");
		double width = input.nextDouble();
		System.out.print("사각형의 세로를 입력하세요: ");
		double length = input.nextDouble();
		Rectangle r = new Rectangle(x, y, length, width);
		
		System.out.print("삼각형의 X좌표를 입력하세요: ");
		x = input.nextInt();
		System.out.print("삼각형의 Y좌표를 입력하세요: ");
		y = input.nextInt();
		System.out.print("삼각형의 가로를 입력하세요: ");
		double base = input.nextDouble();
		System.out.print("삼각형의 세로를 입력하세요: ");
		double height = input.nextDouble();
		Triangle t = new Triangle(x, y, base, height);
		
		System.out.println("입력된 도형의 정보입니다.");
		//System.out.println(s.toString());
		//객체를 생성할 수 없는 추상 클래스
		
		System.out.println("입력된 사각형의 정보입니다.");
		System.out.println(r.toString());
		
		System.out.println("입력된 삼각형의 정보입니다.");
		System.out.println(t.toString());
		
		input.close();

	}

}
