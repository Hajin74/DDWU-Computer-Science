// 20200988 컴퓨터학과 유하진, 76
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Practice76 {

	public static void main(String[] args) {
		Config cfg;			
		
		int count = 1;
			
		try {
			cfg = getInput();
			
			boolean find = false;
			while(find == false) {
				ArrayList<Integer> list = getRandomNumbers(cfg);
				
				System.out.print("(" + count + "차) ");
				count++;
				printArray(list);
				
				find = searchArray(list, cfg.getKey());	
			}
		} catch (ImproperKeyValueException e) {
			System.out.println("난수값의 범위가 잘못되었습니다.");
			
			return;
		}
		
		System.out.println(count + "차 실행에서 난수 " + cfg.getKey() + "이 발생했으므로 프로그램을 종료합니다.");
	}
	
	private static Config getInput() throws ImproperKeyValueException {
		Scanner sc = new Scanner(System.in);
		
		System.out.print("원하는 난수의 개수를 입력하세요: ");
		int size = sc.nextInt();
		
		System.out.print("난수값의 범위를 설정하세요: ");
		int range = sc.nextInt();
		
		System.out.print("찾고 싶은 난수값을 입력하세요: ");
		int key = sc.nextInt();
		sc.close();
		
		if(key > range || key < 0) {
			throw (new ImproperKeyValueException());
		}
		
		Config c = new Config(size, range, key);
		
		return c;
	}
	
	private static ArrayList<Integer> getRandomNumbers(Config c) {
		ArrayList<Integer> arr1 = new ArrayList<Integer>();
		for(int i = 0; i <= c.getRange(); i++) {
			arr1.add(i);
		}
		
		Collections.shuffle(arr1);
		
		ArrayList<Integer> arr2 = new ArrayList<Integer>();
		for(int i = 0; i < c.getSize(); i++) {
			arr2.add(arr1.get(i));
		}
		
		return arr2;
	}
	
	private static void printArray(ArrayList<Integer> list) {
		for(int i = 0; i < list.size(); i++) {
			System.out.print(list.get(i) + "\t");
			
			if(i % 9 == 0 && i != 0) {
				System.out.println();
			}
		}
		System.out.println();
	}
	
	private static boolean searchArray(ArrayList<Integer> list, Integer key) {
		for(int i = 0; i < list.size(); i++) {
			if(list.get(i) == key) {
				return true;
			}
		}
		
		return false;
	}

}
