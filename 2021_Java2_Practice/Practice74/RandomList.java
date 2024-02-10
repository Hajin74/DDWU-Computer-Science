// 20200988 컴퓨터학과 유하진, 74
import java.util.ArrayList;
import java.util.Collections;

public class RandomList<T> {
	ArrayList<T> list;
	
	public RandomList() {
		list = new ArrayList<T>();
	}
	
	public void add(T item) {
		list.add(item);
	}
	
	public T select() throws ImproperArraySizeException {
		if(this.list == null || this.list.size() == 0) {
			throw (new ImproperArraySizeException());
		}
		
		ArrayList<T> clist = copyArray();
		Collections.shuffle(clist);	
		
		return clist.get(0);
	}
	
	public void print() {
		for(int i = 0; i < list.size(); i++) {
			System.out.print(list.get(i) + "\t");
		}
		System.out.println();
	}
	
	public ArrayList<T> copyArray() {
		ArrayList<T> copyList = new ArrayList<T>();
		
		for(int i = 0; i < list.size(); i++) {
			copyList.add(list.get(i));
		}
		
		return copyList;
	}
}
