/* 20200988 ��ǻ���а� ������
 * #80
 */
public class Practice80 {
	public static void main(String[] args) {
		System.out.println("Circle ��ü�� ���� �����Դϴ�.");
		Circle c0 = new Circle(4, 5, 10.0);
		System.out.println(c0.toString());
		
		System.out.println("Cylinder ��ü1�� ���� �����Դϴ�.");
		Cylinder c1 = new Cylinder();
		System.out.println(c1.toString());
		
		System.out.println("Cylinder ��ü2�� ���� �����Դϴ�.");
		Cylinder c2 = new Cylinder(10, 20, 5.0, 3.0);
		System.out.println(c2.toString());
	}
}
