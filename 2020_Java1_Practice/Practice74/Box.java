/* 20200988 ��ǻ���а� ������
 * #74
 */
public class Box {
	int x, y, z;
	
	public String toString() {
		String result = "";
		
		result += "����: " + x + ", ";
		result += "����: " + y + ", ";
		result += "����: " + z + "\n";
		result += "����: " + getVolume() + "\n";
		result += "���� : " + (float)getWeight();
		
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
