// ��ǻ���а� 20200988 ������
import java.util.Random;

public class Practice17 {

	public static void main(String[] args) {
		Random rg = new Random();
		
		int[] numbers = new int[10];
		int i, sum = 0;
		
		// 1. ���� ����
		for(i = 0; i < numbers.length; i++) {
			numbers[i] = rg.nextInt(101);
		}
		
		// 2. ���
		for(i = 0; i < numbers.length; i++) {
			System.out.print(numbers[i] + "\t");
		}
		System.out.println();
		
		// 3. ���� ���
		for(i = numbers.length - 1; i >= 0; i--) {
			System.out.print(numbers[i] + "\t");
		}
		System.out.println();
		
		// 4. �� ���, ���
		for(i = 0; i < numbers.length; i++) {
			sum += numbers[i];
		}
		System.out.println("�������� ����: " + sum);
		
		// 5. ��� ���, ���
		double average = 0;
		for(i = 0; i < numbers.length; i++) {
			average += numbers[i] / (double)numbers.length;
		}
		System.out.println("�������� ���: " + average);
	}

}