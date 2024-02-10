// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice11 {
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		System.out.print("키를 입력하세요: ");
		double height = input.nextDouble();
		System.out.print("몸무게를 입력하세요: ");
		double weight = input.nextDouble();
		
		double normal = (height - 100) * 0.9;
		System.out.println("표준체중은 " + normal + "입니다.");
		
		if(normal > weight) {
			System.out.println("저체중입니다.");
		} else if(normal == weight) {
			System.out.println("정상체중입니다.");
		} else {
			System.out.println("과체중입니다.");
		}
				
		input.close();
	}
}
