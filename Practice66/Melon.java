// 20200988 ��ǻ���а� ������
// 66
public class Melon extends Food{
	String farmInfo;
	
	public String toString() {
		String result = "";
		result += "Į�θ�: " + calory;
		result += "\n����: " + price;
		result += "\n����: " + weight;
		result += "\n������: " + farmInfo;
		return result;
	}
}
