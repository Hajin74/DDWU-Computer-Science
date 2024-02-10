/* 20200988 ��ǻ���а� ������
 * #83
 */
public class Circle extends Shape{
	private int radius;
	
	public Circle(int x, int y, int radius, String type) {
		super(x, y, type);
		this.radius = radius;
	}
	
	@Override
	public double calcArea() {
		double area;
		area = radius * radius * 3.14;
		return area;
	}
	
	public String toString() {
		String result = super.toString();
		result += "������: " + radius + ", ";
		result += "����: " + calcArea() + "\n";
		return result;
	}
	
}
