// 20200988 컴퓨터학과 유하진
// 65
package casino;

public class Practice65B {
	public static void main(String[] args) {
		game.Dice dice1 = new game.Dice();
		dice1.roll();
		int num1 = dice1.getValue();
		
		game.Dice dice2 = new game.Dice();
		dice2.roll();
		int num2 = dice2.getValue();
		
		int count = 1;
		while(num1 != num2) {
			System.out.println(count + "차: 첫번째 " + dice1.toString() + ", 두번째 " + dice2.toString());
			dice1.roll();
			dice2.roll();
			num1 = dice1.getValue();
			num2 = dice2.getValue();
			count++;
		}
		System.out.println(count + "차: 첫번째 " + dice1.toString() + ", 두번째 " + dice2.toString());
		System.out.println("게임이 종료되었습니다.");
	}
}
