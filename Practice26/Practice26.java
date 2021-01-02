// 컴퓨터학과 20200988 유하진 _ 답안제출문제
import java.util.Scanner;

public class Practice26 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		int[] arr = new int[5];
		for(int i = 0; i < arr.length; i++)
		{
			System.out.print(i + 1 +"번째 숫자를 입력하세요: ");
			arr[i] = input.nextInt();
		}
		
		System.out.println("입력된 숫자는 다음과 같습니다.");
		for(int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
		}
		
		System.out.println("\n역순 출력입니다.");
		for(int i = arr.length - 1; i >= 0 ; i--) {
			System.out.print(arr[i] + " ");
		}
		
		int max = -1;
		for(int i = 0; i < arr.length; i++) {
			if(arr[i] > max) {
				max = arr[i];
			}
		}
		System.out.println("\n가장 큰 수는 " + max + "입니다.");
		
		input.close();

	}

}
