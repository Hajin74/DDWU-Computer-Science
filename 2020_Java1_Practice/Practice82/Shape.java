/* 20200988 ��ǻ���а� ������
 * #82
 */
public class Shape {
	private int x, y;
	
	public Shape(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public void setX(int x) {
		this.x = x;
	}
	
	public void setY(int y) {
		this.y = y;
	}
	
	public int getX() {
		return x;
	}
	
	public int getY() {
		return y;
	}
	
	public double calcArea() {
		return -1;
	}
	
	@Override
	public String toString() {
		String result = "";
		result += "Ÿ��: ����\n";
		result += "�߽���ǥ: " + positionStr() + "\n";
		return result;
	}
	
	public String positionStr() {
		String result = "";
		result += "(" + getX() + "," + getY() + ")";
		return result;
	}
}
