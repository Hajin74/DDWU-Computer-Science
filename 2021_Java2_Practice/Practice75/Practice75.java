// 20200988 ��ǻ���а� ������, 75
import java.util.Collections;
import java.util.ArrayList;
import java.util.Scanner;

public class Practice75 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.print("���ϴ� ������ ������ �Է��ϼ���: ");
		int size = sc.nextInt();
		
		System.out.print("�������� ������ �����ϼ���: ");
		int range = sc.nextInt();
		
		System.out.println("������ ���� �迭�� ������ �����ϴ�.");
		ArrayList<Integer> list = getRandomList(size, range);
		printArray10PerLine(list);
		
		ArrayList<Integer> sortedList = new ArrayList<Integer>();
		for(int i = 0; i < list.size(); i++) {
			sortedList.add(list.get(i));
		}
		
		System.out.println("���ĵ� ���� �迭�� ������ �����ϴ�.");
		Collections.sort(sortedList);
		printArray10PerLine(sortedList);
		
		System.out.println("������ ���� �迭�� ������ �����ϴ�.");
		printArray10PerLine(list);
		
		System.out.println("���� ū ��: " + sortedList.get(size - 1) + ", ���� ���� ��: " + sortedList.get(0));
		
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
