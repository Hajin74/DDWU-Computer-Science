// 20200988 유하진 컴퓨터학과

public class BoxTest {

	public static void main(String[] args) {
		Box obj1 = new Box(10, 20, 50);
		Box obj2 = new Box(10, 20, 50);
		
		boolean rslt = (obj1 == obj2);
		System.out.println(rslt);
	}

}

