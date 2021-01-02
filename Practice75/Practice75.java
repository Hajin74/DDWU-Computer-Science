/* 20200988 컴퓨터학과 유하진
 * #75
 */
import java.util.Scanner;

public class Practice75 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("내 키를 입력하세요: ");
		int height = input.nextInt();
		System.out.print("내 몸무게를 입력하세요: ");
		int weight = input.nextInt();
		BodyData b1 = new BodyData();
		b1.setHeight(height);
		b1.setWeight(weight);
		
		System.out.print("\n당신의 키를 입력하세요: ");
		height = input.nextInt();
		System.out.print("당신의 몸무게를 입력하세요: ");
		weight = input.nextInt();
		BodyData b2 = new BodyData();
		b2.setHeight(height);
		b2.setWeight(weight);
		
		if(b1.isTallerThan(b2) == true) {
			System.out.println("\n키는 당신이 더 큽니다.");
		} else {
			System.out.println("\n키는 내가 더 큽니다.");
		}
		
		if(b1.needDiet() == true) {
			System.out.println("나는 다이어트가 필요합니다.");
		} else {
			System.out.println("나는 다이어트가 필요하지 않습니다.");
		}
		
		if(b2.needDiet() == true) {
			System.out.println("당신은 다이어트가 필요합니다.");
		} else {
			System.out.println("당신은 다이어트가 필요하지 않습니다.");
		}
		
		input.close();
	}
}
