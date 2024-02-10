// 20200988 컴퓨터학과 유하진
// 68
package fruit;

public class Food {
	int calory;
	protected int price;
	protected double weight;
	
	public String toString() {
		String result = "";
		result += "칼로리: " + calory;
		result += "\n가격: " + price;
		result += "\n무게: " + weight;
		return result;
	}
	
	public Food() {
		calory = 0;
		price = 0;
		weight = 0;
	}
	
	public void setCalory(int calory) {
		this.calory = calory;
	}
	
	public void setPrice(int price) {
		this.price = price;
	}
	
	public void setWeight(double weight) {
		this.weight = weight;
	}
	
	protected int getCalory() {
		return calory;
	}
}
