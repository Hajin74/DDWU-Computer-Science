// 20200988 컴퓨터학과 유하진, 77
import java.util.Scanner;

public class Practice77 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		// c1, 1번 생성자
		System.out.println("첫 번째 원 c1의 정보입니다.");
		Circle c1 = new Circle();
		System.out.println(c1.toString());
		
		// c2, 2번 생성자
		System.out.println("\n두 번째 원 c2의 정보를 입력 받습니다.");
		System.out.print("중심좌표의 X값을 입력하세요: ");
		int x = sc.nextInt();
		System.out.print("중심좌표의 Y값을 입력하세요: ");
		int y = sc.nextInt();
		System.out.print("반지름 값을 입력하세요: ");
		int r = sc.nextInt();
		
		Circle c2 = new Circle(x, y, r);
		
		System.out.println("\n두 번째 원 c2의 정보입니다.");
		System.out.println(c2.toString());
		
		// c3, 3번 생성자
		System.out.println("\n세 번째 원 c3의 정보입니다.");
		
		Point p1 = new Point(); // 매개변수로 들어갈 Point객체 만들기
		p1.setX(60);
		p1.setY(70);
		
		Circle c3 = new Circle(p1, 80);
		
		System.out.println(c3.toString());
		
		// c4, 3번 생성자
		System.out.println("\n네 번째 원 c4의 정보를 입력 받습니다.");
		System.out.print("중심좌표의 X값을 입력하세요: ");
		x = sc.nextInt();
		System.out.print("중심좌표의 Y값을 입력하세요: ");
		y = sc.nextInt();
		System.out.print("반지름 값을 입력하세요: ");
		r = sc.nextInt();
		
		Point p2 = new Point(); // 매개변수로 들어갈 Point객체 만들기
		p2.setX(x);
		p2.setY(y);
		
		Circle c4 = new Circle(p2, r);
		
		System.out.println("\n네 번째 원 c4의 정보입니다.");
		System.out.println(c4.toString());
		
		// 다시 한 번 c1 ~ c4 출력
		System.out.println("\n첫 번째 원 c1의 정보입니다.");
		System.out.println(c1.toString());
		
		System.out.println("\n두 번째 원 c2의 정보입니다.");
		System.out.println(c2.toString());
		
		System.out.println("\n세 번째 원 c3의 정보입니다.");
		System.out.println(c3.toString());
		
		System.out.println("\n네 번째 원 c4의 정보입니다.");
		System.out.println(c4.toString());
		
		sc.close();
	}

}
