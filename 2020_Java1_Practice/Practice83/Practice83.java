/* 20200988 컴퓨터학과 유하진
 * #83
 */
public class Practice83 {
	public static void main(String[] args) {
		Rectangle r0 = new Rectangle(30, 35, 31, 32, "사각형");
		System.out.println(r0.toString());
		
		Triangle t0 = new Triangle(40, 45, 50, 60, "삼각형");
		System.out.println("\n" + t0.toString());
		
		Circle c0 = new Circle(50, 53, 10, "원");
		System.out.println("\n" + c0.toString());
	}
}
