// 20200988 ��ǻ���а� ������
// 68
package nofruit;

import fruit.Food;

public class Potato extends Food{
	public int getUnitPrice() {
		return price / (int)weight;
	}
	
	public String toString() {
		String result = "";
		result += "Į�θ�: " + getCalory();
		result += "\n����: " + price;
		result += "\n����: " + weight;
		result += "\n��������: " + getUnitPrice();
		return result;
	}
}
