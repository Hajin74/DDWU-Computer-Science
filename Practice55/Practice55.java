// 20200988 ��ǻ���а� ������, 55
import java.util.Scanner;

public class Practice55 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Date d1; 
		System.out.println("ù ��° ��¥�� �Է��ϼ���.");
		System.out.print("�⵵: ");
		int year1 = input.nextInt();
		System.out.print("��: ");
		int month1 = input.nextInt();
		System.out.print("��: ");
		int day1 = input.nextInt();
		d1 = new Date(year1, month1, day1);
		
		Date d2 = new Date();
		System.out.println("�� ��° ��¥�� �Է��ϼ���.");
		System.out.print("�⵵: ");
		d2.setYear(input.nextInt());
		System.out.print("��: ");
		d2.setMonth(input.nextInt());
		System.out.print("��: ");
		d2.setDay(input.nextInt());
		
		int rslt = Date.compareDate(d1, d2);
		if(rslt == -1) {
			System.out.println("ù ��° ��¥�� " + d1.toString() + "�� �ռ� �����Դϴ�.");
		} else if(rslt == 0) {
			System.out.println("�� ��¥�� ���� ��¥�Դϴ�.");
		} else {
			System.out.println("�� ��° ��¥�� " + d2.toString() + "�� �ռ� �����Դϴ�.");
		}
		
		input.close();
		
	}
}
