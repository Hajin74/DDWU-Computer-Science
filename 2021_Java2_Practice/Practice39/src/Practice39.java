// 20200988 ��ǻ���а� ������, 39
import java.util.Scanner;

public class Practice39 {

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
		
		Date earlist = dateList[0];
		int earlistIndex = 0;
		for(int i = 1; i < dateList.length; i++) {
			if(Date.compareDate(earlist, dateList[i]) == 1) {
				earlist = dateList[i];
				earlistIndex = i + 1;
			}
		}
		
		System.out.println("���� ���� ��¥�� " + earlistIndex + "��° �Էµ� " + earlist.toString() + "�Դϴ�.");
		
		input.close();
	}

}
