// 20200988 컴퓨터학과 유하진
// 66
public class Melon extends Food{
	String farmInfo;
	
	public String toString() {
		String result = "";
		result += "칼로리: " + calory;
		result += "\n가격: " + price;
		result += "\n무게: " + weight;
		result += "\n재배농장: " + farmInfo;
		return result;
	}
}
