// 20200988 ��ǻ���а� ������
import java.util.Scanner;

public class Practice38 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Date[] dateList = new Date[2];
		
		System.out.println("ù ���� ��¥�� �Է��ϼ���.");
		System.out.print("�⵵: ");
		int year = input.nextInt();
		System.out.print("��: ");
		int month = input.nextInt();
		System.out.print("��: ");
		int day = input.nextInt();
		
		dateList[0] = new Date(year, month, day);
		
		System.out.println("�� ���� ��¥�� �Է��ϼ���.");
		System.out.print("�⵵: ");
		year = input.nextInt();
		System.out.print("��: ");
		month = input.nextInt();
		System.out.print("��: ");
		day = input.nextInt();
		
		dateList[1] = new Date(year, month, day);
		
		if(Date.compareDate(dateList[0], dateList[1]) == -1) {
			System.out.println("ù ��° ��¥�� " + dateList[0].toString() + "�� �̸� ��¥�Դϴ�.");
		} else if(Date.compareDate(dateList[0], dateList[1]) == 0) {
			System.out.println("�� ��¥�� ���� ��¥�Դϴ�.");
		} else {
			System.out.println("�� ��° ��¥�� " + dateList[1].toString() + "�� �̸� ��¥�Դϴ�.");
		}
		
		input.close();
	}

}
