// ��ǻ���а� 20200988 ������
import java.util.Random;

public class Practice21 {

	public static void main(String[] args) {
		Random rg = new Random();

		int[] numbers = new int[10];
		int i, sum = 0;
		
		// 1. ���� ����, ���� �迭�� ��Ұ� ���
		for(i = 0; i < numbers.length; i++) {
			numbers[i] = rg.nextInt(101);
		}
		
		// 2. ���� ���
		for(int value: numbers) {
			System.out.print(value + "\t");
		}
		System.out.println();
		
		// 3. ���� ���� ���
		for(i = numbers.length - 1; i >= 0; i--) {
			System.out.print(numbers[i] + "\t");
		}
		System.out.println();
		
		// 4. ���� �� ���� ���
		for(int value: numbers) {                                                                                                                    
			sum += value;
		}
		System.out.println("�������� ����: " + sum);
		
		// 5. ���� ��� ���� ���
		double average = 0;
		for(int value: numbers) {      
			average += value / (double)numbers.length;
		}
		System.out.println("�������� ���: " + average);
	}

}