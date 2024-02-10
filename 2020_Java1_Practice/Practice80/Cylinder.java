/* 20200988 컴퓨터학과 유하진
 * #80
 */
public class Cylinder extends Circle{
	private double height;
	
	public Cylinder() {
		this(0, 0, 0, 0);
	}
	
	public Cylinder(double radius) {
		this(0, 0, radius, 0);
	}
	
	public Cylinder(double radius, double height) {
		this(0, 0, radius, height);
	}
	
	public Cylinder(int x, int y, double radius, double height) {
		super(x, y, radius);
		this.height = height;
	}
	
	public double getHeight() {
		return height;
	}
	
	public double getVolume() {
		return getArea() * getHeight();
	}
	
	public String toString() {
		String rst = super.toString();
		
		rst += "높이 : " + getHeight() + "\n";
		rst += "부피 : " + getVolume() + "\n";
		
		return rst;
	}
}
