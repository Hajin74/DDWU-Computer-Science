// 20200988 컴퓨터학과 유하진, 74
import java.util.Scanner;

public class Practice74 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("정수형 RandomList를 생성합니다.");
		RandomList<Integer> r = new RandomList<Integer>();
		
		int num = 0;
		while(num != 4) {
			System.out.print("원하는 기능을 선택하세요 (1-추가/2-출력/3-무작위/4-종료): ");
			num = input.nextInt();
			
			if(num == 1) {
				System.out.print("추가하고 싶은 원소의 개수를 입력하세요: ");
				int n = input.nextInt();
				
				for(int i = 0; i < n; i++) {
					System.out.print("[" + i + "]번 원소: ");
					r.add(input.nextInt());
				}
			} else if (num == 2) {
				r.print();
			} else if (num == 3) {
				try {
					System.out.println("무작위 원소 출력: " + r.select());				
				} catch (ImproperArraySizeException e) {
					System.out.println("입력된 원소가 없는 상태입니다.");
				}
			} else if (num == 4) {
				System.out.println("프로그램을 종료합니다.");				
			}
			
			System.out.println();
		}
		
		
		input.close();
	}

}
