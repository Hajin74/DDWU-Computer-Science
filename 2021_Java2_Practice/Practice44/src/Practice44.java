// 20200988 컴퓨터학과 유하진, 44
public class Practice44 {

	public static void main(String[] args) {
		Shape sArray[] = new Shape[3];
		
		sArray[0] = new Shape();
		sArray[1] = new Rectangle();
		sArray[2] = new Triangle();
		
		System.out.println(sArray[0] instanceof Shape); // 당연히 true
		System.out.println(sArray[0] instanceof Rectangle); // false
		System.out.println(sArray[0] instanceof Triangle); // false
		System.out.println(sArray[1] instanceof Shape); // 상위 클래스라 true
		System.out.println(sArray[1] instanceof Rectangle); // 당연히
		System.out.println(sArray[1] instanceof Triangle); // false
		System.out.println(sArray[2] instanceof Shape); // 상위 클래스라 true
		System.out.println(sArray[2] instanceof Rectangle); // false
		System.out.println(sArray[2] instanceof Triangle); // 당연히 true
	}

}
