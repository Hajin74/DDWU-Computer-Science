/* 20200988 ��ǻ���а� ������
 * #71
 */
public class Practice71 {
	public static void main(String[] args) {
		System.out.println("Circle ��ü�� ���� �����Դϴ�.");
		Circle c0 = new Circle(10.0);
		System.out.println("������ : " + c0.getRadius());
		System.out.println("�ܸ��� : " + c0.getArea());

		System.out.println("\nCylinder ��ü1�� ���� �����Դϴ�.");
		Cylinder c1 = new Cylinder();
		System.out.println("������ : " + c1.getRadius());
		System.out.println("�ܸ��� : " + c1.getArea());
		System.out.println("���� : " + c1.getHeight());
		System.out.println("���� : " + c1.getVolume());
		
		System.out.println("\nCylinder ��ü2�� ���� �����Դϴ�.");
		Cylinder c2 = new Cylinder(5.0, 3.0);
		System.out.println("������ : " + c2.getRadius());
		System.out.println("�ܸ��� : " + c2.getArea());
		System.out.println("���� : " + c2.getHeight());
		System.out.println("���� : " + c2.getVolume());
	}
}
