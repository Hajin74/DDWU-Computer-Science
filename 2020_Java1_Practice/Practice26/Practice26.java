// ��ǻ���а� 20200988 ������ _ ������⹮��
import java.util.Scanner;

public class Practice26 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		int[] arr = new int[5];
		for(int i = 0; i < arr.length; i++)
		{
			System.out.print(i + 1 +"��° ���ڸ� �Է��ϼ���: ");
			arr[i] = input.nextInt();
		}
		
		System.out.println("�Էµ� ���ڴ� ������ �����ϴ�.");
		for(int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}
		
		System.out.println("\n���� ����Դϴ�.");
		for(int i = arr.length - 1; i >= 0 ; i--) {
			System.out.print(arr[i] + " ");
		}
		
		int max = -1;
		for(int i = 0; i < arr.length; i++) {
			if(arr[i] > max) {
				max = arr[i];
			}
		}
		System.out.println("\n���� ū ���� " + max + "�Դϴ�.");
		
		input.close();

	}

}
