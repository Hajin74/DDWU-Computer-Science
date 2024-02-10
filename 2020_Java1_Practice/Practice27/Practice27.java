// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice27 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		int num[] = new int[5];
		for(int i = 0; i < num.length; i++) {
			System.out.print(i + 1 + "번째 숫자를 입력하세요 : ");
			num[i] = input.nextInt();
		}
		
		System.out.println("\n입력된 숫자는 다음과 같습니다.");
		for(int i = 0; i < num.length; i++) {
			System.out.print(num[i] + " ");
		}
		
		System.out.println("\n역순 출력입니다.");
		for(int i = num.length - 1; i >= 0 ; i--) {
			System.out.print(num[i] + " ");
		}
		
		int max = -1;
		for(int i = 0; i < num.length; i++) {
			if(max < num[i]) {
				max = num[i];
			}
		}
		System.out.println("\n가장 큰 수는 " + max + "입니다.");
		
		int[] cnt = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
		for(int i = 0; i < num.length; i++) {
			int index = num[i];
			cnt[index]++;
		}
		
		System.out.println("\n숫자 별로 입력된 횟수는 다음과 같습니다.");
		for(int i = 0; i < cnt.length; i++) {
			System.out.println("숫자" + i + " : " + cnt[i] + "번");
		}
		System.out.println("\n가장 큰 수는 " + max + "이고 배열 내에 " + cnt[max] + "번 나타납니다.");
		
		input.close();
	}

}
