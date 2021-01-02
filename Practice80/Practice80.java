/* 20200988 컴퓨터학과 유하진
 * #80
 */
public class Practice80 {
	public static void main(String[] args) {
		System.out.println("Circle 객체에 대한 정보입니다.");
		Circle c0 = new Circle(4, 5, 10.0);
		System.out.println(c0.toString());
		
		System.out.println("Cylinder 객체1에 대한 정보입니다.");
		Cylinder c1 = new Cylinder();
		System.out.println(c1.toString());
		
		System.out.println("Cylinder 객체2에 대한 정보입니다.");
		Cylinder c2 = new Cylinder(10, 20, 5.0, 3.0);
		System.out.println(c2.toString());
	}
}
