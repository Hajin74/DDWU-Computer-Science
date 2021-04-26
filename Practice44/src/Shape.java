// 20200988 컴퓨터학과 유하진, 44
public class Shape {
	private int x;
	private int y;
	
	public Shape() {
		this(1, 1);
	}
	
	public Shape(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public void setX(int x) {
		this.x = x;
	}
	
	public int getX() {
		return x;
	}
	
	public void setY(int y) {
		this.y = y;
	}
	
	public int getY() {
		return y;
	}
	
	public double calcArea() {
		return -1;
	}
	
	public String toString() {
		String result = "";
		
		result += "중심좌표: (" + getX() + ", ";
		result += getY() + ")";
		
		return result;
	}
}
