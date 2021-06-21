// 20200988 컴퓨터학과 유하진, 75
import java.util.Collections;
import java.util.ArrayList;
import java.util.Scanner;

public class Practice75 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.print("원하는 난수의 개수를 입력하세요: ");
		int size = sc.nextInt();
		
		System.out.print("난수값의 범위를 설정하세요: ");
		int range = sc.nextInt();
		
		System.out.println("생성된 난수 배열은 다음과 같습니다.");
		ArrayList<Integer> list = getRandomList(size, range);
		printArray10PerLine(list);
		
		ArrayList<Integer> sortedList = new ArrayList<Integer>();
		for(int i = 0; i < list.size(); i++) {
			sortedList.add(list.get(i));
		}
		
		System.out.println("정렬된 난수 배열은 다음과 같습니다.");
		Collections.sort(sortedList);
		printArray10PerLine(sortedList);
		
		System.out.println("원래의 난수 배열은 다음과 같습니다.");
		printArray10PerLine(list);
		
		System.out.println("가장 큰 값: " + sortedList.get(size - 1) + ", 가장 작은 값: " + sortedList.get(0));
		
		sc.close();
	}
	
	public static void printArray10PerLine(ArrayList <Integer> a) {
		for(int i = 0; i < a.size(); i++) {
			System.out.print(a.get(i) + "\t");
			
			if(i % 9 == 0 && i != 0) {
				System.out.println();
			}
		}
		System.out.println();
	}
	
	public static ArrayList<Integer> getRandomList(int size, int range) {
		ArrayList<Integer> arr1 = new ArrayList<Integer>();
		for(int i = 0; i <= range; i++) {
			arr1.add(i);
		}
		
		Collections.shuffle(arr1);
		
		ArrayList<Integer> arr2 = new ArrayList<Integer>();
		for(int i = 0; i < size; i++) {
			arr2.add(arr1.get(i));
		}
		
		return arr2;
	}

}
