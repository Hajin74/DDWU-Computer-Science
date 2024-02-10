// ��ǻ���а� 20200988 ������
import java.util.Random;

public class Practice19 {

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
		
		int[] arr = new int[5];
		int count = 1;
		int keyIndex;
		
		do {
			System.out.println("(" + count + "�� ����)");
			count++;
			
			for(int i = 0; i < arr.length; i++) {
				arr[i] = rg.nextInt(101);
			}
			
			printArray(arr);
			
			keyIndex = searchArray(arr, 100);
			
		} while(keyIndex == -1);

	}

}
