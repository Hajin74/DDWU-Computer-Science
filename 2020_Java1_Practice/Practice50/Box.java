// 20200988 ��ǻ���а� ������, 50
public class Box {
	private int x, y, z;
	private boolean empty;
	
	public void setX(int x) {
		this.x = x;
	}
	
	public void setY(int y) {
		this.y = y;
	}
	
	public void setZ(int z) {
		this.z = z;
	}
	
	public int getX() {
		return x;
	}
	
	public int getY() {
		return y;
	}
	
	public int getZ() {
		return z;
	}
	
	public void fillBox() {
		empty = false;
	}
	
	public void emptyBox() {
		empty = true;
	}
	
	public String toString() {
		String result = "";
		
		result += "����: " + getX() + "cm\n";
		result += "����: " + getY() + "cm\n";
		result += "����: " + getZ() + "cm\n";
		
		if(this.empty == true) {
			result += "���� �ڽ��� ��� �ֽ��ϴ�.";
		} else {
			result += "���� �ڽ����� ������ ��� �ֽ��ϴ�.";
		}
		
		return result;
	}
	
	public Box() {
		this.x = 0;
		this.y = 0;
		this.z = 0;
		this.emptyBox();
	}
	
	public Box(int x, int y, int z) {
		setX(x);
		setY(y);
		setZ(z);
		this.emptyBox();
	}
}
