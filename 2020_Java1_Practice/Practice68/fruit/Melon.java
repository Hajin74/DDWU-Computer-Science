// 20200988 ��ǻ���а� ������
// 68
package fruit;

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
	
	public void setFarmInfo(String farmInfo) {
		this.farmInfo = farmInfo; 
	}
}
