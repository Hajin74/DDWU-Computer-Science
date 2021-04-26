// 20200988 컴퓨터학과 유하진
import java.util.Scanner;

public class Practice32 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Square s1 = new Square();
		
		System.out.print("사각형1의 가로를 입력: ");
		int width = input.nextInt();
		s1.setWidth(width);
		System.out.print("사각형1의 세로를 입력: ");
		int height = input.nextInt();
		s1.setHeight(height);
		
		Square s2 = new Square();
		
		System.out.print("사각형2의 가로를 입력: ");
		width = input.nextInt();
		s2.setWidth(width);
		System.out.print("사각형2의 세로를 입력: ");
		height = input.nextInt();
		s2.setHeight(height);
		
		if(s1.isSmallerThan(s2)) {
			System.out.println("사각형1의 넓이가 더 작습니다.");
		} else if(s2.isSmallerThan(s1)){
			System.out.println("사각형2의 넓이가 더 작습니다.");
		} else if(!s1.isSmallerThan(s2) && !s2.isSmallerThan(s1)){
			System.out.println("두 사각형의 넓이가 같습니다.");
		}
		
		input.close();
	}

}
