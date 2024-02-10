// 20200988 컴퓨터학과 유하진
// 65
package game;

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
		result += "주사위 = " + getValue();
		return result;
	}
	
	public void roll() {
		setValue(rg.nextInt(6) + 1);
	}
	
	public Dice() {
		setValue(0);
	}
}
