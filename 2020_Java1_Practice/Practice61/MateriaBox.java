// 20200988 ��ǻ���а� ������ #61

public class MateriaBox extends Box {
	private String attribute;
	
	
	public String getAttribute() {
		return attribute;
	}
	
	public void setAttribute(String attribute) {
		this.attribute = attribute;
	}
	
	public MateriaBox(int x, int y, int z, String attribute) {
		setX(x);
		setY(y);
		setZ(z);;
		setAttribute(attribute);
	}
}
