// 20200988 컴퓨터학과 유하진, 77
public class Circle {
	private Point center;
	private int radius;
	
	public Circle() {
		center = new Point();
		this.radius = 0;
	}
	
	public Circle(int x, int y, int radius) {
		center = new Point();
		center.setX(x);
		center.setY(y);
		this.radius = radius;
	}
	
	public Circle(Point p, int radius) {
		center = new Point();
		center = p;
		this.radius = radius;
	}
	
	public void setCenter(Point center) {
		this.center = center;
	}
	
	public Point getCenter() {
		return center;
	}
	
	public void setRadius(int radius) {
		this.radius = radius;
	}
	
	public int getRadius() {
		return radius;
	}
	
	public String toString() {
		String rst = "";
		
		rst += center.toString() + "\n";
		rst += "반지름: " + getRadius();
		
		return rst;
	}
}
