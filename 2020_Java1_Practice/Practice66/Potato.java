// 20200988 ��ǻ���а� ������
// 66
public class Potato extends Food{
	public int getUnitPrice() {
		return price / (int)weight;
	}
	
	public String toString() {
		String result = "";
		result += "Į�θ�: " + calory;
		result += "\n����: " + price;
		result += "\n����: " + weight;
		result += "\n��������: " + getUnitPrice();
		return result;
	}
}
