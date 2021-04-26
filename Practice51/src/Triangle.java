// 20200988 컴퓨터학과 유하진, 51

public class Triangle extends Shape implements Drawable{
	private double base;
	private double height;
	
	public void setBase(double base) {
		this.base = base;
	}
	
	public double getBase() {
		return base;
	}
	
	public void setHeight(double height) {
		this.height = height;
	}
	
	public double getHeight() {
		return height;
	}
	
	public Triangle() {
		this(1, 1);
	}
	
	public Triangle(double base, double height) {
		this(1, 1, base, height);
	}
	
	public Triangle(int x, int y, double base, double height) {
		super(x, y);
		this.base = base;
		this.height = height;
	}
	
	public double calcArea() {
		double area = (base * height) / 2;
		
		return area;
	}
	
	public String toString() {
		String result = "";
		
		result += "중심좌표: (" + getX() + ", " + getY() + "), ";
		result += "밑변: " + getBase() + ", ";
		result += "높이: " + getHeight() + ", ";
		result += "면적: " + calcArea();
		
		return result;
	}
	
	public void draw() {
		System.out.print("삼각형, ");
		System.out.println(toString());
	}
}
