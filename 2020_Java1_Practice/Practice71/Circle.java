/* 20200988 ��ǻ���а� ������
 * #71
 */
public class Circle {
	private double radius;
	
	public Circle(double radius) {
		this.radius = radius;
	}
	
	public Circle() {
		this(0);
	}
	
	public double getRadius() {
		return radius;
	}
	
	public double getArea() {
		return radius * radius * 3.14;
	}
}
