// 20200988 ��ǻ���а� ������ #59
public class Eagle extends Animal{
	private int wings = 2;
	
	public String fly() {
		return ("fly()�� ȣ��Ǿ���");
	}
	
	public int getWings() {
		return wings;
	}
	
	public void setWings(int wings) {
		this.wings = wings;
	}
	
	public void fly2() {
		sleep();
		String msg = fly();
		System.out.println(" : " + msg);
	}
	
	public String toString() {
		String result = "";
		result += "������: " + getWeight() + "kg";
		result += " - ";
		result += "�׸� ����: " + picture;
		result += " - ";
		result += "����: " + getWings() + "��";
		return result;
	}
}
