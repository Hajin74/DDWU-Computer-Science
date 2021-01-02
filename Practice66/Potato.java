// 20200988 컴퓨터학과 유하진
// 66
public class Potato extends Food{
	public int getUnitPrice() {
		return price / (int)weight;
	}
	
	public String toString() {
		String result = "";
		result += "칼로리: " + calory;
		result += "\n가격: " + price;
		result += "\n무게: " + weight;
		result += "\n단위가격: " + getUnitPrice();
		return result;
	}
}
