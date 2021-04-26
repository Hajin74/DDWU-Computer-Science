// 20200988 컴퓨터학과 유하진, 49

public class Rectangle extends Shape{
	private double length;
	private double width;
	
	public void setLength(double length) {
		this.length = length;
	}
	
	public double getLength() {
		return length;
	}
	
	public void setWidth(double width) {
		this.width = width;
	}
	
	public double getWidth() {
		return width;
	}
	
	public Rectangle() {
		this(1, 1, 1, 1);
	}
	
	public Rectangle(double length, double width) {
		this(1, 1, length, width);
	}
	
	public Rectangle(int x, int y, double length, double width) {
		super(x, y);
		this.length = length;
		this.width = width;
	}
	
	public double calcArea() {
		double area = getLength() * getWidth();
		
		return area;
	}
	
	public String toString() {
		String result = "";
		
		result += "중심좌표: (" + getX() + ", " + getY() + "), ";
		result += "가로: " + getLength() + ", ";
		result += "세로: " + getWidth() + ", ";
		result += "면적: " + calcArea();
		
		return result;
	}
}
