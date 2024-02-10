// 20200988 컴퓨터학과 유하진, 73
import java.util.HashSet;
import java.util.Iterator;

public class Practice73 {
	public static void main(String args[]) {
		HashSet<String> set = new HashSet<String>();
		
		set.add("Milk");
		set.add("Bread");
		set.add("Butter");
		set.add("Cheese");
		set.add("Ham");
		set.add("Ham");
		
		// (1) == System.out.println(set);
		System.out.println(set.toString());
		
		// (2) for-each
		System.out.print("[");
		for(String food: set) {
			System.out.print(food + ", ");
		}
		System.out.print("]\n");
	
		// (3) Iterator
		Iterator<String> e = set.iterator();
		
		System.out.print("[");
		while(e.hasNext()) {
			String s = e.next();
			
			System.out.print(s + ", ");
		}
		System.out.print("]\n");
		
		// (4) for-each, 마지막 컴마 제거		
		int size = set.size();
		
		System.out.print("[");
		for(String food: set) {
			if(size == 1) {
				System.out.print(food + "]\n");
			} else {
				System.out.print(food + ", ");
			}
			size--;
		}
	}
}
