// 20200988 컴퓨터학과 유하진, 70
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
		int num = rg.nextInt(list.size()); // 랜덤한 인덱스 얻기
		
		return list.get(num); // 해당 인덱스의 원소 반환
	}
	
	public void print() {
		for(int i = 0; i < list.size(); i++) {
			System.out.print(list.get(i) + "\t");
		}
		System.out.println();
	}
}
