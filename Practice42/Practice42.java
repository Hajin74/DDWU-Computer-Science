// 20200988 ��ǻ���а� ������
import java.util.Scanner;

public class Practice42 {

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
		adultday.setYear(birthday.year + 20);
		adultday.setMonth(birthday.month);
		adultday.setDay(birthday.day);
		
		String strBirth = birthday.toString();
		System.out.println("\n����� ������ " + strBirth);
		String strAdult = adultday.toString();
		System.out.println("����� �������� " + strAdult);
		System.out.println("����� ������ " + strBirth);
		
		input.close();
	}

}
