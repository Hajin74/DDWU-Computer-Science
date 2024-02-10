/* 20200988 컴퓨터학과 유하진
 * #83
 */
public class Rectangle extends Shape {
	private int length, width;
	
	public Rectangle(int x, int y, int width, int length, String type) {
		super(x, y, type);
		setWidth(width);
		setLength(length);
	}
	
	public void setLength(int length) {
		this.length = length;
	}
	
	public void setWidth(int width) {
		this.width = width;
	}
	
	public int getLength() {
		return length;
	}
	
	public int getWidth() {
		return width;
	}
	
	@Override
	public double calcArea() {
		double area;
		area = getLength() * getWidth();
		return area;
	}
	
	@Override
	public String toString() {
		String result = super.toString();
		result += "가로: " + getWidth() + ", ";
		result += "세로: " + getLength() + ", ";
		result += "면적: " + calcArea() + "\n";
		
		return result;		
	}
}
