/* 20200988 컴퓨터학과 유하진
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
		result += "반지름: " + radius + ", ";
		result += "면적: " + calcArea() + "\n";
		return result;
	}
	
}
