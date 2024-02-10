/* 20200988 컴퓨터학과 유하진
 * #74
 */
public class Box {
	int x, y, z;
	
	public String toString() {
		String result = "";
		
		result += "가로: " + x + ", ";
		result += "세로: " + y + ", ";
		result += "높이: " + z + "\n";
		result += "부피: " + getVolume() + "\n";
		result += "무게 : " + (float)getWeight();
		
		return result;
	}
	
	public Box(int x, int y, int z) {
		this.x = x;
		this.y = y;
		this.z = z;
	}
	
	public int getVolume() {
		return x * y * z;
	}
	
	public double getWeight() {
		return x * y * z * 1.1;
	}
}
