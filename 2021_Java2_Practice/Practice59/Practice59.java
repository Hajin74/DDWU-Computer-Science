// 20200988 ��ǻ���а� ������, 59
import java.util.Scanner;
import java.util.Random;

public class Practice59 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		Random rg = new Random();

		System.out.println("10���� ������ �߻����Ѽ� �迭�� �����մϴ�.");
		
		int[] arr = new int[10];
		for(int i = 0; i < arr.length; i++) {
			arr[i] = rg.nextInt(100);
			System.out.print(arr[i] + "\t");
		}
		
		System.out.print("\n���ڸ� �ϳ� �Է��ϼ���: ");
		int key = input.nextInt();
		
		try {
			int keyIndex = searchArray(arr, key);
			
			System.out.println("�Էµ� ���� " + key + "�� �ε��� " + keyIndex + "�� �����մϴ�.");
		} catch (NotFoundException e) {
			System.out.println("�Էµ� ���� " + key + "�� �迭�� �������� �ʽ��ϴ�.");
			//e.printStackTrace();
		} finally {
			input.close();
		}
	}
	
	public static int searchArray(int[] array, int key) throws NotFoundException {
		for(int i = 0; i < array.length; i++) {
			if(array[i] == key) {
				return i;
			}
		}
		
		throw (new NotFoundException());
	}

}
