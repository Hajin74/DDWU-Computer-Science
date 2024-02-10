/* 20200988 컴퓨터학과 유하진
 * #82
 */
public class Shape {
	private int x, y;
	
	public Shape(int x, int y) {
		this.x = x;
		this.y = y;
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
	
	public double calcArea() {
		return -1;
	}
	
	@Override
	public String toString() {
		String result = "";
		result += "타입: 도형\n";
		result += "중심좌표: " + positionStr() + "\n";
		return result;
	}
	
	public String positionStr() {
		String result = "";
		result += "(" + getX() + "," + getY() + ")";
		return result;
	}
}
