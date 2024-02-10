// 컴퓨터학과 20200988 유하진
import java.util.Random;
import java.util.Scanner;

public class Practice22 {

	public static int searchArray(int[] array, int key) {
		int i = 0;
		
		for(int value: array) {
			if(value == key)
				return i;
			i++;
		}
		
		return -1;
	}
	
	public static void printArray(int[] array) {
		for(int value: array) {
			System.out.print(value + "\t");
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
		
		System.out.print("찾고 싶은 숫자를 입력하세요: ");
		int key = sc.nextInt();
		
		int keyIndex = searchArray(arr, key);
		if(keyIndex == -1) {
			System.out.println("입력한 숫자 " + key + "는 배열에 없습니다.");
		} else {
			System.out.println("입력한 숫자 " + key + "는 배열의 " + keyIndex + "번 자리에 있습니다.");
		}
		
		sc.close();
	}

}
