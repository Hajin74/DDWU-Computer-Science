/* 20200988 컴퓨터학과 유하진
 * #83
 */
public abstract class Shape {
	private int x, y;
	protected String type;
	
	public Shape(int x, int y, String type) {
		setX(x);
		setY(y);
		this.type = type;
	}
	
	public void setX(int x) {
		this.x = x;
	}
	
	public void setY(int y) {
		this.y = y;
	}
	
	public abstract double calcArea();
	// Shape는 상위 개념이여서 넓이를 구할 수 없음.
	
	public String toString() {
		String result = "";
		result += "타입: " + type + "\n";
		result += "중심좌표: (" + x + "," + y + "), ";
		return result;
	}
}
