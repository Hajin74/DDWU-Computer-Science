// 20200988 ��ǻ���а� ������, 32
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
}
