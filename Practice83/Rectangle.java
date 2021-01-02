/* 20200988 ��ǻ���а� ������
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
		result += "����: " + getWidth() + ", ";
		result += "����: " + getLength() + ", ";
		result += "����: " + calcArea() + "\n";
		
		return result;		
	}
}
