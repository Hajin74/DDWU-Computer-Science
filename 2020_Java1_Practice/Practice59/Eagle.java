// 20200988 컴퓨터학과 유하진 #59
public class Eagle extends Animal{
	private int wings = 2;
	
	public String fly() {
		return ("fly()가 호출되었음");
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
		result += "몸무게: " + getWeight() + "kg";
		result += " - ";
		result += "그림 설명: " + picture;
		result += " - ";
		result += "날개: " + getWings() + "개";
		return result;
	}
}
