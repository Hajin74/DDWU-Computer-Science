// 20200988 ��ǻ���а� ������
import java.util.Scanner;

public class Practice40 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Data birthday = new Data();
		System.out.print("�¾ �⵵�� �Է��ϼ���: ");
		birthday.year = input.nextInt();
		System.out.print("�¾ ���� �Է��ϼ���: ");
		birthday.month = input.nextInt();
		System.out.print("�¾ ��¥�� �Է��ϼ���: ");
		birthday.day = input.nextInt();
		
		Data adultday = new Data();
		adultday.year = birthday.year + 20;
		adultday.month = birthday.month;
		adultday.day = birthday.day;
		
		String strBirth = birthday.toString();
		System.out.println("\n����� ������ " + strBirth);
		String strAdult = adultday.toString();
		System.out.println("����� �������� " + strAdult);
		System.out.println("����� ������ " + strBirth);

		input.close();
	}

}
