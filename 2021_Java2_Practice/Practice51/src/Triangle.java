// 20200988 ��ǻ���а� ������, 51

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
		
		result += "�߽���ǥ: (" + getX() + ", " + getY() + "), ";
		result += "�غ�: " + getBase() + ", ";
		result += "����: " + getHeight() + ", ";
		result += "����: " + calcArea();
		
		return result;
	}
	
	public void draw() {
		System.out.print("�ﰢ��, ");
		System.out.println(toString());
	}
}
