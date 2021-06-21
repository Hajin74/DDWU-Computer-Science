// 20200988 컴퓨터학과 유하진, 59
import java.util.Scanner;
import java.util.Random;

public class Practice59 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		Random rg = new Random();

		System.out.println("10개의 난수를 발생시켜서 배열에 저장합니다.");
		
		int[] arr = new int[10];
		for(int i = 0; i < arr.length; i++) {
			arr[i] = rg.nextInt(100);
			System.out.print(arr[i] + "\t");
		}
		
		System.out.print("\n숫자를 하나 입력하세요: ");
		int key = input.nextInt();
		
		try {
			int keyIndex = searchArray(arr, key);
			
			System.out.println("입력된 숫자 " + key + "는 인덱스 " + keyIndex + "에 존재합니다.");
		} catch (NotFoundException e) {
			System.out.println("입력된 숫자 " + key + "는 배열에 존재하지 않습니다.");
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
