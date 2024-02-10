// 20200988 ��ǻ���а� ������
// 69
public class Rectangle extends Shape{
	private int width, height;
	
	public Rectangle(int width, int height) {
		super();
		setWidth(width);
		setHeight(height);
	}
	
	public Rectangle() {
		this(0, 0);
	}
	
	public void setWidth(int width) {
		this.width = width;
	}
	
	public void setHeight(int height) {
		this.height = height;
	}
	
	public int getWidth() {
		return width;
	}
	
	public int getHeight() {
		return height;
	}
	
	public int area() {
		return getWidth() * getHeight();
	}
	
	public int perimeter() {
		return 2 * (getWidth() + getHeight());
	}
	
	public void printInfo() {
		String result = "";
		result += "�簢�� :: ";
		result += "�߽���ǥ ";
		result += "(" + getX() + "," + getY() + ") :: ";
		result += "���� - " + area() + " :: ";
		result += "�ѷ� - " + perimeter();
		
		System.out.println(result);
	}
}
