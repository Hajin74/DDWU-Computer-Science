// 20200988 ��ǻ���а� ������
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
			System.out.println(count + "��: ù��° " + dice1.toString() + ", �ι�° " + dice2.toString());
			dice1.roll();
			dice2.roll();
			num1 = dice1.getValue();
			num2 = dice2.getValue();
			count++;
		}
		System.out.println(count + "��: ù��° " + dice1.toString() + ", �ι�° " + dice2.toString());
		System.out.println("������ ����Ǿ����ϴ�.");
	}
}
