// 컴퓨터학과 20200988 유하진
import java.util.Random;
public class Practice30 {

	public static void main(String[] args) {
		int[] data = getData(20);
		
		displayArray(data);
		int maxNum = findMax(data);
		System.out.println("\n가장 큰 수는 " + maxNum + "입니다.");
		
	}

	public static int[] getData(int num) {
		Random random = new Random();
		
		int[] result = new int[num];
		for(int i = 0; i < num; i++) {
			result[i] = random.nextInt(100);
		}
		
		return result;
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
