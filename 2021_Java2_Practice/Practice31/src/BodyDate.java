// 20200988 컴퓨터학과 유하진, 31
public class BodyDate {
	private int weight;
	private int height;
	
	public void setWeight(int weight) {
		this.weight = weight;
	}
	
	public int getWeight() {
		return weight;
	}
	
	public void setHeight(int height) {
		this.height = height;
	}
	
	public int getHeight() {
		return height;
	}
	
	public int idealWeight() {
		int idealWeight;
		
		idealWeight = getHeight() - 110;
		
		return idealWeight;
	}
	
	public boolean needDiet() {
		if(getWeight() > idealWeight()) {
			return true;
		} else {
			return false;
		}
	}
	
	public boolean isTallerThan(BodyDate b) {
		if(getHeight() >= b.height) {
			return true;
		} else {
			return false;
		}
	}
}
