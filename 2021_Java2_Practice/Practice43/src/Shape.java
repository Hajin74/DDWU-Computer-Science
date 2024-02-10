// 20200988 컴퓨터학과 유하진, 43

public abstract class Shape {
	private int x;
	private int y;
	
	// 자식클래스만 사용할 것이니까 protected 접근 지정자로 써도됨
	protected Shape() {
		this(1, 1);
	}
	
	protected Shape(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	protected void setX(int x) {
		this.x = x;
	}
	
	protected int getX() {
		return x;
	}
	
	protected void setY(int y) {
		this.y = y;
	}
	
	protected int getY() {
		return y;
	}
	
	public abstract double calcArea();
	
	public String toString() {
		String result = "";
		
		result += "중심좌표: (" + getX() + ", ";
		result += getY() + ")";
		
		return result;
	}
}
