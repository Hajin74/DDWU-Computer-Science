// 20200988 컴퓨터학과 유하진, 67
import java.util.Scanner;

public class Practice67 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String[] sArray = {"하나", "두울", "세엣"};
		Integer[] iArray = {10, 20, 30, 40};
		
		System.out.println("문자열 배열의 내용입니다.");
		MyArray.<String>displayArray(sArray);
		
		for(int i = 0; i < 2; i++) {
			System.out.print("\n문자열 배열에서 찾고 싶은 인덱스를 입력하세요: ");
			int index = sc.nextInt();
			
			System.out.print(index + "번 인덱스 저장 내용: ");
			String element = MyArray.<String>pick(sArray, index);
			System.out.println(element);
		}
		
		System.out.print("\n0번 인덱스에 저장된 값과 교환하고 싶은 인덱스를 선택하세요: ");
		int num = sc.nextInt();
		MyArray.<String>swap(sArray, 0, num);
		MyArray.<String>displayArray(sArray);
		
		System.out.println("\n정수형 배열의 내용입니다.");
		MyArray.<Integer>displayArray(iArray);
		
		for(int i = 0; i < 2; i++) {
			System.out.print("\n정수형 배열에서 찾고 싶은 인덱스를 입력하세요: ");
			int index = sc.nextInt();
			System.out.print(index + "번 인덱스 저장 내용: ");
			
			try {
				Integer element = MyArray.<Integer>pickNew(iArray, index);
				System.out.println(element);				
			} catch(NoSuchIndexException e) {
				System.out.println("인덱스가 범위를 벗어났습니다>> null");
			}
		}
		
		sc.close();
	}

}
