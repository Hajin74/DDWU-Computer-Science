/* 20200988 컴퓨터학과 유하진
 * #74
 */
import java.util.Scanner;

public class Practice74 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("box1 정보를 입력하세요.");
		System.out.print("가로: ");
		int x = input.nextInt();
		System.out.print("세로: ");
		int y = input.nextInt();
		System.out.print("높이: ");
		int z = input.nextInt();
		Box box1 = new Box(x, y, z);
		
		System.out.println("\nbox2 정보를 입력하세요.");
		System.out.print("가로: ");
		x = input.nextInt();
		System.out.print("세로: ");
		y = input.nextInt();
		System.out.print("높이: ");
		z = input.nextInt();
		System.out.print("재질: ");
		String att = input.next();
		MaterialBox box2 = new MaterialBox(x, y, z, att);
		
		System.out.println("\nbox3 정보를 입력하세요.");
		System.out.print("가로: ");
		x = input.nextInt();
		System.out.print("세로: ");
		y = input.nextInt();
		System.out.print("높이: ");
		z = input.nextInt();
		System.out.print("재질: ");
		att = input.next();
		MaterialBox box3 = new MaterialBox(x, y, z, att);
		
		System.out.println("\nbox1의 정보입니다.");
		System.out.println(box1.toString());
		System.out.println("\nbox2의 정보입니다.");
		System.out.println(box2.toString());
		System.out.println("\nbox3의 정보입니다.");
		System.out.println(box3.toString());
		
		input.close();
	}
}
