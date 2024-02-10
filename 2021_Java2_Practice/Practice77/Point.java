// 20200988 컴퓨터학과 유하진, 77
public class Point {
	private int x;
	private int y;
	
	public Point() {
		this.x = 0;
		this.y = 0;
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
	
	public String toString() {
		String rst = "";
		
		rst += "중심좌표 : (" + getX() + ", ";
		rst += getY() + ")";
		
		return rst;
	}
}
