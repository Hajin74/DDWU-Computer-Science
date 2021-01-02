// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice28 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		int[] num = new int[10];
		for(int i = 0; i < num.length; i++) {
			System.out.print(i + 1 + "번째 숫자를 입력하세요 : ");
			num[i] = input.nextInt();
		}
		
		displayArray(num);
		int max = findMax(num);
		
		System.out.println("\n가장 큰 숫자는 " + max + "입니다.");
		
		input.close();
	}
	
	public static void displayArray(int[] iArray) {
		System.out.println("입력된 숫자는 다음과 같습니다.");
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
