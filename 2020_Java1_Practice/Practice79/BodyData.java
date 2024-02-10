/* 20200988 컴퓨터학과 유하진
 * #79
 */
public class BodyData {
	private int weight;
	private int height;
	private String name;
	
	// 접근자와 설정자 추가
	public void setWeight(int weight) {
		this.weight = weight;
	}
	
	public void setHeight(int height) {
		this.height = height;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public int getWeight() {
		return weight;
	}
	
	public int getHeight() {
		return height;
	}
	
	public String getName() {
		return name;
	}
	
	public int idealWeight() {
		return height - 110;
	} // height보다 110 작은 값을 반환
	
	public boolean isTallerThan(BodyData b) {
		if(b.height > height) {
			return true;
		} else {
			return false;
		}
	}
	// 본 객체의 키가 매개변수 b의 키보다 크면 true, 아니면 false 반환
	
	public boolean needDiet() {
		if(weight > idealWeight()) {
			return true;
		} else {
			return false;
		}
	}
	// 현재의 weight가 이상적인 weight보다 크면 true, 아니면 false 반환
	
	
}
