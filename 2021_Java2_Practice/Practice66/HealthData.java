// 20200988 컴퓨터학과 유하진, 66
public class HealthData<W ,H> {
	private String name;
	private W weight;
	private H height;
	
	public HealthData(String name, W weight, H height) {
		this.name = name;
		this.weight = weight;
		this.height = height;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public String getName() {
		return name;
	}
	
	public void setWeight(W weight) {
		this.weight = weight;
	}
	
	public W getWeight() {
		return weight;
	}
	
	public void setHeight(H height) {
		this.height = height;
	}
	
	public H getHeight() {
		return height;
	}
	
	public String toString() {
		String result = "";
		
		result += "(" + getName() + ", ";
		result += getHeight() + ", ";
		result += getWeight() + ")";
		
		return result;
	}
}
