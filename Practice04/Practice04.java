// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice04 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		double mile, kilo;
		
		System.out.print("���ϴ� ������ �Է��ϼ��� : ");
		mile = input.nextDouble();
		kilo = mile * 1.609;
		System.out.println(mile + "������ " + kilo + "ų�ι��� �Դϴ�.");
		
		input.close();
	}

}
