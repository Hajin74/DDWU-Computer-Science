/* 20200988 컴퓨터학과 유하진
 * #76
 */
import java.util.Scanner;

public class Practice76 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("사각형1의 가로를 입력: ");
		int width = input.nextInt();
		System.out.print("사각형1의 세로를 입력: ");
		int height = input.nextInt();
		Rectangle r1 = new Rectangle(width, height);
		
		System.out.print("사각형2의 가로를 입력: ");
		width = input.nextInt();
		System.out.print("사각형2의 세로를 입력: ");
		height = input.nextInt();
		Rectangle r2 = new Rectangle(width, height);
		
		boolean rst = r1.isSmallerThan(r2);
		if(rst == true) {
			System.out.println("사각형1의 넓이가 더 작습니다.");
		}
		
		input.close();
	}
}
