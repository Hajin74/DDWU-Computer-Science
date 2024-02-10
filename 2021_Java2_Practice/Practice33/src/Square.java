// 20200988 컴퓨터학과 유하진, 33
public class Square {
	private int width;
	private int height;
	
	public void setWidth(int width) {
		this.width = width;
	}
	
	public int getWidth() {
		return width;
	}
	
	public void setHeight(int height) {
		this.height = height;
	}
	
	public int getHeight() {
		return height;
	}
	
	private int area() {
		int area;
		
		area = getWidth() * getHeight();
		
		return area;
	}
	
	public boolean isSmallerThan(Square s) {
		if(area() < s.area()) {
			return true;
		} else {
			return false;
		}
	}
	
	public static Square getInstance(int width, int height) {
		Square square = new Square();
		
		square.setWidth(width);
		square.setHeight(height);
		
		return square;
	}
}