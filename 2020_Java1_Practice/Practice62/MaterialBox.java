// 20200988 컴퓨터학과 유하진 #62

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
		result += "가로: " + getX() + ", ";
		result += "세로: " + getY() + ", ";
		result += "높이: " + getZ() + "\n";
		result += "재질: " + getAttribute() + "\n";
		result += "부피: " + getVolume() + "\n";
		result += "무게: " + getWeight();
		System.out.println(result);
	}
}
