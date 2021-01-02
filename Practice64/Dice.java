// 20200988 ��ǻ���а� ������
// 64
import java.util.Random;

public class Dice {
	private int value;
	private Random rg = new Random();
	
	public int getValue() {
		return value;
	}
	
	private void setValue(int value) {
		this.value = value;
	}
	
	public String toString() {
		String result = "";
		result += "�ֻ��� = " + getValue();
		return result;
	}
	
	public void roll() {
		setValue(rg.nextInt(6) + 1);
	}
	
	public Dice() {
		setValue(0);
	}
}
