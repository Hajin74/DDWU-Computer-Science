// 20200988 컴퓨터학과 유하진, 39
import java.util.Scanner;

public class Practice39 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Date[] dateList = new Date[5];
		
		for(int i = 0; i < dateList.length; i++) {
			System.out.println(i + 1 + "번째 날짜를 입력하세요.");
			System.out.print("년도: ");
			int year = input.nextInt();
			System.out.print("월: ");
			int month = input.nextInt();
			System.out.print("일: ");
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
		
		System.out.println("가장 빠른 날짜는 " + earlistIndex + "번째 입력된 " + earlist.toString() + "입니다.");
		
		input.close();
	}

}
