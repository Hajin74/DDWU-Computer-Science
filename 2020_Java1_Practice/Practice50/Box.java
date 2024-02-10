// 20200988 컴퓨터학과 유하진, 50
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
		
		result += "가로: " + getX() + "cm\n";
		result += "세로: " + getY() + "cm\n";
		result += "높이: " + getZ() + "cm\n";
		
		if(this.empty == true) {
			result += "지금 박스는 비어 있습니다.";
		} else {
			result += "지금 박스에는 물건이 들어 있습니다.";
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
