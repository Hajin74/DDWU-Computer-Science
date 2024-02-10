// 20200988 컴퓨터학과 유하진, 53
import java.util.Scanner;

public class Practice53 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Shape list[] = new Shape[3];

		System.out.print("도형의 X좌표를 입력하세요: ");
		int x = input.nextInt();
		System.out.print("도형의 Y좌표를 입력하세요: ");
		int y = input.nextInt();
		list[0] = new Shape(x, y);
		
		System.out.print("사각형의 X좌표를 입력하세요: ");
		x = input.nextInt();
		System.out.print("사각형의 Y좌표를 입력하세요: ");
		y = input.nextInt();
		System.out.print("사각형의 가로를 입력하세요: ");
		int width = input.nextInt();
		System.out.print("사각형의 세로를 입력하세요: ");
		int length = input.nextInt();
		list[1] = new Rectangle(x, y, length, width);
		
		System.out.print("삼각형의 X좌표를 입력하세요: ");
		x = input.nextInt();
		System.out.print("삼각형의 Y좌표를 입력하세요: ");
		y = input.nextInt();
		System.out.print("삼각형의 밑변을 입력하세요: ");
		int base = input.nextInt();
		System.out.print("삼각형의 높이를 입력하세요: ");
		int height = input.nextInt();
		list[2] = new Triangle(x, y, base, height);
		
		
		System.out.println("입력된 정보입니다.");
		for(int i = 0; i < list.length; i++) {
			System.out.println(i + 1 + ": " + list[i].toString());
		}
		
		System.out.println("\n-- 도형들을 이동합니다 --\n");
		for(int i = 0; i < list.length; i++) {
			list[i].move();
		}
		
		for(int i = 0; i < list.length; i++) {
			System.out.println(i + 1 + ": " + list[i].toString());
		}
		
		input.close();
	}

}
