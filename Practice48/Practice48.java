// 20200988 ��ǻ���а� ������, 48
import java.util.Scanner;

public class Practice48 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Date dateObj = new Date();
		System.out.print("�¾ �⵵�� �Է��ϼ���: ");
		dateObj.setYear(input.nextInt());
		System.out.print("�¾ �� �Է��ϼ���: ");
		dateObj.setMonth(input.nextInt());
		System.out.print("�¾ ��¥�� �Է��ϼ���: ");
		dateObj.setDay(input.nextInt());
		
		Date dateObj2 = new Date();
		dateObj2.setYear(dateObj.getYear() + 20);
		dateObj2.setMonth(dateObj.getMonth());
		dateObj2.setDay(dateObj.getDay());
		
		String result1 = dateObj.toString();
		System.out.println("����� ������ " + result1);
		String result2 = dateObj2.toString();
		System.out.println("����� �������� " + result2);
		
		input.close();
	}
}
