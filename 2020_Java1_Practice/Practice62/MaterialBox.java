// 20200988 ��ǻ���а� ������ #62

public class MaterialBox extends Box {
	private String attribute;
	
	
	public String getAttribute() {
		return attribute;
	}
	
	public void setAttribute(String attribute) {
		this.attribute = attribute;
	}
	
	public MaterialBox(int x, int y, int z, String attribute) {
		setX(x);
		setY(y);
		setZ(z);;
		setAttribute(attribute);
	}
	
	public void printInfo() {
		String result = "";
		result += "����: " + getX() + ", ";
		result += "����: " + getY() + ", ";
		result += "����: " + getZ() + "\n";
		result += "����: " + getAttribute() + "\n";
		result += "����: " + getVolume() + "\n";
		result += "����: " + getWeight();
		System.out.println(result);
	}
}
