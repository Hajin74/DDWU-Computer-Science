/* 20200988 ��ǻ���а� ������
 * #80
 */
public class Circle extends Shape{
	private double radius;
	
	public Circle() {
		this(0, 0, 0);
	}
	
	public Circle(double radius) {
		this(0, 0, radius);
	}
	
	public Circle(int x, int y, double radius) {
		super(x, y);
		this.radius = radius;
	}
	
	public double getRadius() {
		return radius;
	}
	
	public double getArea() {
		return radius * radius * 3.14;
	}
	
	public String toString() {
		String rst = super.toString();
		
		rst += "������: " + getRadius() + "\n";
		rst += "�ܸ���: " + getArea() + "\n";
		
		return rst;
	}
}
