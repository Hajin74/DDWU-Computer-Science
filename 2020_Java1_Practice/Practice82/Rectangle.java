/* 20200988 ��ǻ���а� ������
 * #82
 */
public class Rectangle extends Shape {
	private int length, width;
	
	public Rectangle(int x, int y, int width, int length) {
		super(x, y);
		this.length = length;
		this.width = width;
	}
	
	public void setLength(int length) {
		this.length = length;
	}
	
	public void setWidth(int width) {
		this.width = width;
	}
	
	public int getLength() {
		return length;
	}
	
	public int getWidth() {
		return width;
	}
	
	@Override
	public double calcArea() {
		double area;
		area = getLength() * getWidth();
		return area;
	}
	
	@Override
	public String toString() {
		String result = "";
		
		result += "Ÿ��: �簢��\n";
		result += "�߽���ǥ: " + positionStr() + ", ";
		result += "����: " + getWidth() + ", ";
		result += "����: " + getLength() + ", ";
		result += "����: " + calcArea() + "\n";
		
		return result;		
	}
}
