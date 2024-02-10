// ��ǻ���а� 20200988 ������
import java.util.Random;
import java.util.Scanner;

public class Practice18 {

	public static int searchArray(int[] array, int key) {
		int keyIndex = -1;
		
		for(int i = 0; i < array.length; i++) {
			if(array[i] == key)
				return i;
		}
		
		return keyIndex;
	}
	
	public static void printArray(int[] array) {
		for(int i = 0; i < array.length; i++) {
			System.out.print(array[i] + "\t");
		}
		System.out.println();
	}
	
	public static void main(String[] args) {
		Random rg = new Random();
		Scanner sc = new Scanner(System.in);
		
		int[] arr = new int[10];
		
		for(int i = 0; i < arr.length; i++) {
			arr[i] = rg.nextInt(101);
		}
		
		printArray(arr);
		
		System.out.print("ã�� ���� ���ڸ� �Է��ϼ���: ");
		int key = sc.nextInt();
		
		int keyIndex = searchArray(arr, key);
		if(keyIndex == -1) {
			System.out.println("�Է��� ���� " + key + "�� �迭�� �����ϴ�.");
		} else {
			System.out.println("�Է��� ���� " + key + "�� �迭�� " + keyIndex + "�� �ڸ��� �ֽ��ϴ�.");
		}
		
		sc.close();
	}

}