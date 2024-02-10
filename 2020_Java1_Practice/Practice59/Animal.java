// 20200988 컴퓨터학과 유하진 #59
public class Animal {
	private double weight;
	String picture;
	
	private String printMsg() { 
		return ("eat()가 호출되었음"); 
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
		System.out.print("sleep()가 호출되었음"); 
	}
	
	public String toString() {
		String result = "";
		result += "몸무게: " + weight + "kg";
		result += " - ";
		result += "그림 설명: " + picture;
		return result;
	}
}
