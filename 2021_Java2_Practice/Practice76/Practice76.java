// 20200988 ��ǻ���а� ������, 76
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
				
				System.out.print("(" + count + "��) ");
				count++;
				printArray(list);
				
				find = searchArray(list, cfg.getKey());	
			}
		} catch (ImproperKeyValueException e) {
			System.out.println("�������� ������ �߸��Ǿ����ϴ�.");
			
			return;
		}
		
		System.out.println(count + "�� ���࿡�� ���� " + cfg.getKey() + "�� �߻������Ƿ� ���α׷��� �����մϴ�.");
	}
	
	private static Config getInput() throws ImproperKeyValueException {
		Scanner sc = new Scanner(System.in);
		
		System.out.print("���ϴ� ������ ������ �Է��ϼ���: ");
		int size = sc.nextInt();
		
		System.out.print("�������� ������ �����ϼ���: ");
		int range = sc.nextInt();
		
		System.out.print("ã�� ���� �������� �Է��ϼ���: ");
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
