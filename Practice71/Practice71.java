/* 20200988 컴퓨터학과 유하진
 * #71
 */
public class Practice71 {
	public static void main(String[] args) {
		System.out.println("Circle 객체에 대한 정보입니다.");
		Circle c0 = new Circle(10.0);
		System.out.println("반지름 : " + c0.getRadius());
		System.out.println("단면적 : " + c0.getArea());

		System.out.println("\nCylinder 객체1에 대한 정보입니다.");
		Cylinder c1 = new Cylinder();
		System.out.println("반지름 : " + c1.getRadius());
		System.out.println("단면적 : " + c1.getArea());
		System.out.println("높이 : " + c1.getHeight());
		System.out.println("부피 : " + c1.getVolume());
		
		System.out.println("\nCylinder 객체2에 대한 정보입니다.");
		Cylinder c2 = new Cylinder(5.0, 3.0);
		System.out.println("반지름 : " + c2.getRadius());
		System.out.println("단면적 : " + c2.getArea());
		System.out.println("높이 : " + c2.getHeight());
		System.out.println("부피 : " + c2.getVolume());
	}
}
