// 20200988 컴퓨터학과 유하진, 50
public class Practice50 {
	public static void main(String[] args ) {
		Box b0 = new Box();
		System.out.println("디폴트 상자의 정보입니다.");
		System.out.println(b0.toString());
		
		Box b1 = new Box();
		b1.setX(30);
		b1.setY(45);
		b1.setZ(53);
		b1.fillBox();
		System.out.println("첫 번째 상자의 정보입니다.");
		System.out.println(b1.toString());
		
		Box b2 = new Box(100, 60, 20);
		System.out.println("두 번째 상자의 정보입니다.");
		System.out.println(b2.toString());
	}
}
