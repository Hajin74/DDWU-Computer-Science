/* 20200988 컴퓨터학과 유하진
 * #74
 */
public class MaterialBox extends Box {
	private String attribute;
	
	
	public String getAttribute() {
		return attribute;
	}
	
	@Override
	public double getWeight() {
		String str = getAttribute();
		if(str.equals("paper")) {
			return getVolume() * 1.5;
		} else if(str.equals("wood")) {
			return getVolume() * 2.5;
		} else {
			return getVolume() * 1.1;
		}
	}
	
	public void setAttribute(String attribute) {
		this.attribute = attribute;
	}
	
	public MaterialBox(int x, int y, int z, String attribute) {
		super(x, y, z);
		setAttribute(attribute);
	}
	
	@Override
	public String toString() {
		String result = super.toString();
		result += "\n재질: " + getAttribute();
		return result;
	}
}
