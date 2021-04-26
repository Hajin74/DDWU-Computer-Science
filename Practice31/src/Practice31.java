// 20200988 컴퓨터학과 유하진
import java.util.Scanner;

public class Practice31 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		BodyDate b1 = new BodyDate();
		
		System.out.print("내 키를 입력하세요: ");
		int height = input.nextInt();
		b1.setHeight(height);
		System.out.print("내 몸무게를 입력하세요: ");
		int weight = input.nextInt();
		b1.setWeight(weight);
		
		BodyDate b2 = new BodyDate();
		
		System.out.print("당신의 키를 입력하세요: ");
		height = input.nextInt();
		b2.setHeight(height);
		System.out.print("당신의 몸무게를 입력하세요: ");
		weight = input.nextInt();
		b2.setWeight(weight);
		
		if(!b1.isTallerThan(b2)) {
			System.out.println("키는 당신이 더 큽니다.");
		} else {
			if(b1.getHeight() > b2.getHeight()) {
				System.out.println("키는 내가 더 큽니다.");
			} else {
				System.out.println("나와 당신의 키는 같습니다.");
			}
		}
		
		if(b1.needDiet()) {
			System.out.println("나는 다이어트가 필요합니다.");
		} else {
			System.out.println("나는 다이어트가 필요하지 않습니다.");
		}
		
		if(b2.needDiet()) {
			System.out.println("당신은 다이어트가 필요합니다.");
		} else {
			System.out.println("당신은 다이어트가 필요하지 않습니다.");
		}
				
		input.close();
	}

}
