/* 20200988 컴퓨터학과 유하진
 * #83
 */
public class Triangle extends Shape {
	private int base, height;
	
	public Triangle(int x, int y, int base, int height, String type) {
		super(x, y, type);
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
		String result = super.toString();
		result += "밑변: " + getBase() + ", ";
		result += "높이: " + getHeight() + ", ";
		result += "면적: " + calcArea() + "\n";
		
		return result;	
	}
}
