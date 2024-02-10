// 20200988 컴퓨터학과 유하진, 70
import java.util.Scanner;

public class Practice70 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		// 정수형 RandomList
		RandomList<Integer> a1 = new RandomList<Integer>();
		
		System.out.println("정수형 RandomList를 생성합니다.");
		System.out.print("리스트의 크기를 입력하세요: ");
		int size = sc.nextInt();
		
		for(int i = 0; i < size; i++) {
			System.out.print("추가하고 싶은 정수를 입력하세요: ");
			a1.add(sc.nextInt());
		}
		System.out.println();
		
		System.out.println("리스트의 내용을 출력합니다.");
		a1.print();
		System.out.println("무작위 원소 출력: " + a1.select() + "\n");
		
		// 문자열 RandomList
		RandomList<String> a2 = new RandomList<String>();
		
		System.out.println("문자열 RandomList를 생성합니다.");
		System.out.print("리스트의 크기를 입력하세요: ");
		size = sc.nextInt();
		
		for(int i = 0; i < size; i++) {
			System.out.print("추가하고 싶은 정수를 입력하세요: ");
			a2.add(sc.next());
		}
		System.out.println();
		
		System.out.println("리스트의 내용을 출력합니다.");
		a2.print();
		System.out.println("무작위 원소 출력: " + a2.select() + "\n");
		
		sc.close();
	}

}
