// 20200988 ��ǻ���а� ������
import java.util.Scanner;

public class Practice43 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Date birthday = new Date();
		System.out.print("�¾ �⵵�� �Է��ϼ���: ");
		birthday.setYear(input.nextInt());
		System.out.print("�¾ ���� �Է��ϼ���: ");
		birthday.setMonth(input.nextInt());
		System.out.print("�¾ ��¥�� �Է��ϼ���: ");
		birthday.setDay(input.nextInt());
		
		Date adultday = new Date();
		int tmpYear = birthday.getYear() + 20;
		adultday.setYear(tmpYear);
		int tmpMonth = birthday.getMonth();
		adultday.setMonth(tmpMonth);
		int tmpDay = birthday.getDay();
		adultday.setDay(tmpDay);
		
		String strBirth = birthday.toString();
		System.out.println("\n����� ������ " + strBirth);
		String strAdult = adultday.toString();
		System.out.println("����� �������� " + strAdult);
		System.out.println("����� ������ " + strBirth);
		
		input.close();
	}

}
