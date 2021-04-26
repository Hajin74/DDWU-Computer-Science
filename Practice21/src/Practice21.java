// 컴퓨터학과 20200988 유하진
import java.util.Random;

public class Practice21 {

	public static void main(String[] args) {
		Random rg = new Random();

		int[] numbers = new int[10];
		int i, sum = 0;
		
		// 1. 난수 저장, 아직 배열에 요소가 없어서
		for(i = 0; i < numbers.length; i++) {
			numbers[i] = rg.nextInt(101);
		}
		
		// 2. 난수 출력
		for(int value: numbers) {
			System.out.print(value + "\t");
		}
		System.out.println();
		
		// 3. 난수 역순 출력
		for(i = numbers.length - 1; i >= 0; i--) {
			System.out.print(numbers[i] + "\t");
		}
		System.out.println();
		
		// 4. 난수 합 계산과 출력
		for(int value: numbers) {                                                                                                                    
			sum += value;
		}
		System.out.println("난수들의 총합: " + sum);
		
		// 5. 난수 평균 계산과 출력
		double average = 0;
		for(int value: numbers) {      
			average += value / (double)numbers.length;
		}
		System.out.println("난수들의 평균: " + average);
	}

}
