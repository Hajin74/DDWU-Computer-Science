// 20200988 ��ǻ���а� ������ #59
public class Lion extends Animal {
	private int legs = 4;
	
	public String roar() {
		return ("roar()�� ��µǾ���");
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
		result += "������: " + getWeight() + "kg";
		result += " - ";
		result += "�׸� ����: " + picture;
		result += " - ";
		result += "�ٸ�: " + getLegs() + "��";
		return result;
	}
}
