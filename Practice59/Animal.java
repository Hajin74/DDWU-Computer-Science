// 20200988 ��ǻ���а� ������ #59
public class Animal {
	private double weight;
	String picture;
	
	private String printMsg() { 
		return ("eat()�� ȣ��Ǿ���"); 
	}
	
	public double getWeight() {
		return weight;
	}
	
	public void setWeight(double weight) {
		this.weight = weight;
	}
	
	public void eat() {
		String msg = printMsg();
		System.out.print(msg);
	}
	
	public void sleep() { 
		System.out.print("sleep()�� ȣ��Ǿ���"); 
	}
	
	public String toString() {
		String result = "";
		result += "������: " + weight + "kg";
		result += " - ";
		result += "�׸� ����: " + picture;
		return result;
	}
}
