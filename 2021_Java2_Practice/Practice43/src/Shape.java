// 20200988 ��ǻ���а� ������, 43

public abstract class Shape {
	private int x;
	private int y;
	
	// �ڽ�Ŭ������ ����� ���̴ϱ� protected ���� �����ڷ� �ᵵ��
	protected Shape() {
		this(1, 1);
	}
	
	protected Shape(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	protected void setX(int x) {
		this.x = x;
	}
	
	protected int getX() {
		return x;
	}
	
	protected void setY(int y) {
		this.y = y;
	}
	
	protected int getY() {
		return y;
	}
	
	public abstract double calcArea();
	
	public String toString() {
		String result = "";
		
		result += "�߽���ǥ: (" + getX() + ", ";
		result += getY() + ")";
		
		return result;
	}
}
