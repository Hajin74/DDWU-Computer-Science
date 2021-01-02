/* 20200988 ��ǻ���а� ������
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
	// Shape�� ���� �����̿��� ���̸� ���� �� ����.
	
	public String toString() {
		String result = "";
		result += "Ÿ��: " + type + "\n";
		result += "�߽���ǥ: (" + x + "," + y + "), ";
		return result;
	}
}
