// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice32 {

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
		
		System.out.println("����� ������ " + birthday.year +"�� " + birthday.month + "�� " + birthday.day +"�� �Դϴ�.");
		System.out.println("����� �������� " + adultday.year +"�� " + adultday.month + "�� " + adultday.day +"�� �Դϴ�.");
		System.out.println("����� ������ " + birthday.year +"�� " + birthday.month + "�� " + birthday.day +"�� �Դϴ�.");
		
		input.close();
	}

}
