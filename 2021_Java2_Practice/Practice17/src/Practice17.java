// 컴퓨터학과 20200988 유하진
import java.util.Random;

public class Practice17 {

	public static void main(String[] args) {
		Random rg = new Random();
		
		int[] numbers = new int[10];
		int i, sum = 0;
		
		// 1. 난수 저장
		for(i = 0; i < numbers.length; i++) {
			numbers[i] = rg.nextInt(101);
		}
		
		// 2. 출력
		for(i = 0; i < numbers.length; i++) {
			System.out.print(numbers[i] + "\t");
		}
		System.out.println();
		
		// 3. 역순 출력
		for(i = numbers.length - 1; i >= 0; i--) {
			System.out.print(numbers[i] + "\t");
		}
		System.out.println();
		
		// 4. 합 계산, 출력
		for(i = 0; i < numbers.length; i++) {
			sum += numbers[i];
		}
		System.out.println("난수들의 총합: " + sum);
		
		// 5. 평균 계산, 출력
		double average = 0;
		for(i = 0; i < numbers.length; i++) {
			average += numbers[i] / (double)numbers.length;
		}
		System.out.println("난수들의 평균: " + average);
	}

}
