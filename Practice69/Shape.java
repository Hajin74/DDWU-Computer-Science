// 20200988 컴퓨터학과 유하진
// 69
public class Shape {
	private int x, y;
	
	public Shape() {
		this.x = 0;
		this.y = 0;
	}
	
	public void setX(int x) {
		this.x = x;
	}
	
	public void setY(int y) {
		this.y = y;
	}
	
	public int getX() {
		return x;
	}
	
	public int getY() {
		return y;
	}
	
	public String toString() {
		String result = "";
		result += "도형 :: ";
		result += "중심좌표 ";
		result += "(" + getX() + "," + getY() + ")";
		return result;
	}
}
