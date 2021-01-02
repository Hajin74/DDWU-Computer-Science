/* 20200988 컴퓨터학과 유하진
 * #71
 */
public class Cylinder extends Circle{
	private double height;
	
	public Cylinder(double radius, double height) {
		super(radius);
		this.height = height;
	}
	
	public Cylinder(double radius) {
		this(radius, 0);
	}
	
	public Cylinder() {
		this(0, 0);
	}
	
	public double getHeight() {
		return height;
	}
	
	public double getVolume() {
		return getArea() * getHeight();
	}
}
