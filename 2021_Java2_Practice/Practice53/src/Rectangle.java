// 20200988 ��ǻ���а� ������, 53

public class Rectangle extends Shape implements Drawable{
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
		
		result += "�簢��, ";
		result += "�߽���ǥ: (" + getX() + ", " + getY() + "), ";
		result += "����: " + getLength() + ", ";
		result += "����: " + getWidth() + ", ";
		result += "����: " + calcArea();
		
		return result;
	}
	
	public void draw() {
		System.out.print("�簢��, ");
		System.out.println(toString());
	}
}
