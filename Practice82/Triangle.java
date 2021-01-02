/* 20200988 컴퓨터학과 유하진
 * #82
 */
public class Triangle extends Shape {
	private int base, height;
	
	public Triangle(int x, int y, int base, int height) {
		super(x, y);
		this.base = base;
		this.height = height;
	}
	
	public void setBase(int base) {
		this.base = base;
	}
	
	public void setHeight(int height) {
		this.height = height;
	}
	
	public int getBase() {
		return base;
	}
	
	public int getHeight() {
		return height;
	}
	
	@Override
	public double calcArea() {
		double area;
		area = getBase() * getHeight() / 2;
		return area;
	}
	
	@Override
	public String toString() {
		String result = "";
		
		result += "타입: 삼각형\n";
		result += "중심좌표: " + positionStr() + ", ";
		result += "밑변: " + getBase() + ", ";
		result += "높이: " + getHeight() + ", ";
		result += "면적: " + calcArea() + "\n";
		
		return result;	
	}
}
