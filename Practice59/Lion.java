// 20200988 컴퓨터학과 유하진 #59
public class Lion extends Animal {
	private int legs = 4;
	
	public String roar() {
		return ("roar()가 출력되었음");
	}
	
	public int getLegs() {
		return legs;
	}
	
	public void setLegs(int legs) {
		this.legs = legs;
	}
	
	public void roar2() {
		eat();
		String msg = roar();
		System.out.print(" : " + msg);
	}
	
	public String toString() {
		String result = "";
		result += "몸무게: " + getWeight() + "kg";
		result += " - ";
		result += "그림 설명: " + picture;
		result += " - ";
		result += "다리: " + getLegs() + "개";
		return result;
	}
}
