/* 20200988 컴퓨터학과 유하진
 * #82
 */
public class Rectangle extends Shape {
	private int length, width;
	
	public Rectangle(int x, int y, int width, int length) {
		super(x, y);
		this.length = length;
		this.width = width;
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
		String result = "";
		
		result += "타입: 사각형\n";
		result += "중심좌표: " + positionStr() + ", ";
		result += "가로: " + getWidth() + ", ";
		result += "새로: " + getLength() + ", ";
		result += "면적: " + calcArea() + "\n";
		
		return result;		
	}
}
