// 20200988 ��ǻ���а� ������
import java.util.Scanner;

public class Practice37 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Date[] dateList = new Date[5];
		
		for(int i = 0; i < dateList.length; i++) {
			System.out.println(i + 1 + "��° ��¥�� �Է��ϼ���.");
			System.out.print("�⵵: ");
			int year = input.nextInt();
			System.out.print("��: ");
			int month = input.nextInt();
			System.out.print("��: ");
			int day = input.nextInt();
			
			dateList[i] = new Date(year, month, day);
		}
		
		for(int i = 0; i < dateList.length; i++) {
			System.out.println(i + 1 + "��° ��¥�� " + dateList[i].toString() + "�Դϴ�.");
		}

		input.close();
	}

}
