// 컴퓨터학과 20200988 유하진
import java.util.Random;

public class Practice29 {

	public static void main(String[] args) {
		Random random = new Random();
		
		int[] randomNumbers = new int[20];
		for(int i = 0; i < 20; i++) {
			randomNumbers[i] = random.nextInt(100);
		}
		
		displayArray(randomNumbers);
		int maxNum = findMax(randomNumbers);
		System.out.println("\n가장 큰 숫자는 " + maxNum + "입니다.");
	}
	
	public static void displayArray(int[] iArray) {
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
