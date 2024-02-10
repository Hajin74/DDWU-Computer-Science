/* 20200988 ��ǻ���а� ������
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
		
		result += "Ÿ��: �ﰢ��\n";
		result += "�߽���ǥ: " + positionStr() + ", ";
		result += "�غ�: " + getBase() + ", ";
		result += "����: " + getHeight() + ", ";
		result += "����: " + calcArea() + "\n";
		
		return result;	
	}
}
