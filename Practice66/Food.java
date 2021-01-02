// 20200988 컴퓨터학과 유하진
// 66
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
}
