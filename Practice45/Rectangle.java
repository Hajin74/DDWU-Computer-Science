// 20200988 ��ǻ���а� ������, 45
public class Rectangle {
	private int width;
	private int height;
	int area() {
		return width * height;
	}
	int perimeter() {
		return 2 * (width + height);
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
}
