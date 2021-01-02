// 20200988 컴퓨터학과 유하진
import java.util.Scanner;

public class Practice58 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("Shape 객체 정보를 입력하세요.");
		Shape s1 = new Shape();
		System.out.print("x좌표 : ");
		s1.x = input.nextInt();
		System.out.print("y좌표 : ");
		s1.y = input.nextInt();
		
		System.out.println("\n첫번째 Circle 객체 정보를 입력하세요.");
		System.out.print("x좌표 : ");
		int x1 = input.nextInt();
		System.out.print("y좌표 : ");
		int y1 = input.nextInt();
		System.out.print("반지름 : ");
		int r1 = input.nextInt();
		Circle c1 = new Circle(r1);
		c1.x = x1;
		c1.y = y1;
		
		System.out.println("\n두번째 Circle 객체 정보를 입력하세요.");
		System.out.print("x좌표 : ");
		int x2 = input.nextInt();
		System.out.print("y좌표 : ");
		int y2 = input.nextInt();
		System.out.print("반지름 : ");
		int r2 = input.nextInt();
		Circle c2 = new Circle(r2);
		c2.x = x2;
		c2.y = y2;
		
		System.out.println("\nShape 객체 정보입니다.");
		s1.print();
		System.out.println("첫번째 Circle 객체 정보입니다.");
		c1.draw();
		System.out.println("두번째 Circle 객체 정보입니다.");
		c2.draw();
		
		System.out.println();
		
		if(compareArea(c1, c2) == 1) {
			System.out.println("첫번째 원의 면적이 더 넓습니다.");
		} else if(compareArea(c1, c2) == -1) {
			System.out.println("두번째 원의 면적이 더 넓습니다.");
		} else {
			System.out.println("두 원의 면적이 같습니다.");
		}
		
		input.close();
	}
	
	public static int compareArea(Circle c1, Circle c2) {
		if(c1.calcArea() > c2.calcArea()) {
			return 1;
		} else if(c1.calcArea() < c2.calcArea()) {
			return -1;
		} else {
			return 0;
		}
	}
}
