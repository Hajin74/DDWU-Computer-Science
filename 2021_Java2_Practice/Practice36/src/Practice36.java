// 20200988 ��ǻ���а� ������, 36
import java.util.Scanner;

public class Practice36 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("1��° ������ x��ǥ: ");
		int x = input.nextInt();
		System.out.print("1��° ������ y��ǥ: ");
		int y = input.nextInt();
		
		Pair p1 = new Pair(x, y); // ������, �Ű����� ���԰������� ����ڽ�
		
		System.out.print("2��° ������ x��ǥ: ");
		x = input.nextInt();
		System.out.print("2��° ������ y��ǥ: ");
		y = input.nextInt();
		
		Pair p2 = new Pair(x, y); // ������, �Ű����� ���԰������� ����ڽ�
		
		System.out.println("�Էµ� 1�� ������: " + p1.toString());
		System.out.println("�Էµ� 2�� ������: " + p2.toString());
		
		Pair rslt = Pair.add(p1, p2); // ���� �޼ҵ�ȣ���ؼ� ��Ģ������ �ϰ� Pair Ŭ���� Ÿ������ ��ȯ���� ����
		System.out.println("���� ���: " + rslt.toString()); // ������ �Ϸ�� Pair ��ü�� toString ȣ���Ͽ� ����
		
		rslt = Pair.sub(p1, p2);
		System.out.println("���� ���: " + rslt.toString());
		
		rslt = Pair.mult(p1, p2);
		System.out.println("���� ���: " + rslt.toString());
		
		rslt = Pair.div(p1, p2);
		System.out.println("������ ���: " + rslt.toString());
		
		input.close();
	}

}
