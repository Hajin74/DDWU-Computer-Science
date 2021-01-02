/* 20200988 컴퓨터학과 유하진
 * #70
 */
public class Box {
	int x, y, z;
	private boolean empty;
	
	public String toString() {
		String result = "";
		
		result += "가로: " + x + "cm\n";
		result += "세로: " + y + "cm\n";
		result += "높이: " + z + "cm\n";
		
		if(this.empty == true) {
			result += "지금 박스는 비어 있습니다.";
		} else {
			result += "지금 박스에는 물건이 들어 있습니다.";
		}
		
		return result;
	}
	
	public Box(int x, int y, int z) {
		this.x = x;
		this.y = y;
		this.z = z;
		this.empty = true;
	}
	
	public int getVolume() {
		return x * y * z;
	}
	
	public double getWeight() {
		return (x * y * z) * 1.1;
	}
}
