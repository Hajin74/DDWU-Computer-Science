// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice28 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		int[] num = new int[10];
		for(int i = 0; i < num.length; i++) {
			System.out.print(i + 1 + "��° ���ڸ� �Է��ϼ��� : ");
			num[i] = input.nextInt();
		}
		
		displayArray(num);
		int max = findMax(num);
		
		System.out.println("\n���� ū ���ڴ� " + max + "�Դϴ�.");
		
		input.close();
	}
	
	public static void displayArray(int[] iArray) {
		System.out.println("�Էµ� ���ڴ� ������ �����ϴ�.");
		for(int i = 0; i < iArray.length; i++) {
			System.out.print(iArray[i] + "\t");
		}
	}
	
	public static int findMax(int[] iArray) {
		int max = -1;
		
		for(int i = 0; i < iArray.length; i++) {
			if(max < iArray[i]) {
				max = iArray[i];
			}
		}
		
		return max;
	}

}
