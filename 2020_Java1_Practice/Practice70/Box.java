/* 20200988 ��ǻ���а� ������
 * #70
 */
public class Box {
	int x, y, z;
	private boolean empty;
	
	public String toString() {
		String result = "";
		
		result += "����: " + x + "cm\n";
		result += "����: " + y + "cm\n";
		result += "����: " + z + "cm\n";
		
		if(this.empty == true) {
			result += "���� �ڽ��� ��� �ֽ��ϴ�.";
		} else {
			result += "���� �ڽ����� ������ ��� �ֽ��ϴ�.";
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
