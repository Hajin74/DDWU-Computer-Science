// 20200988 컴퓨터학과 유하진
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
		result += "사각형 :: ";
		result += "중심좌표 ";
		result += "(" + getX() + "," + getY() + ") :: ";
		result += "면적 - " + area() + " :: ";
		result += "둘레 - " + perimeter();
		
		System.out.println(result);
	}
}
