// 20200988 ��ǻ���а� ������
// 69
public class Shape {
	private int x, y;
	
	public Shape() {
		this.x = 0;
		this.y = 0;
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
	
	public String toString() {
		String result = "";
		result += "���� :: ";
		result += "�߽���ǥ ";
		result += "(" + getX() + "," + getY() + ")";
		return result;
	}
}
