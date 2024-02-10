// 20200988 ��ǻ���а� ������, 70
import java.util.ArrayList;
import java.util.Random;

public class RandomList<T> {
	Random rg = new Random();
	
	ArrayList<T> list;
	
	public RandomList() {
		list = new  ArrayList<T>();
	}
	
	public void add(T item) {
		list.add(item);
	}
	
	public T select() {
		int num = rg.nextInt(list.size()); // ������ �ε��� ���
		
		return list.get(num); // �ش� �ε����� ���� ��ȯ
	}
	
	public void print() {
		for(int i = 0; i < list.size(); i++) {
			System.out.print(list.get(i) + "\t");
		}
		System.out.println();
	}
}
