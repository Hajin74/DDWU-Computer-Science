// 20200988 컴퓨터학과 유하진
import java.util.Scanner;

public class Practice38 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Date[] dateList = new Date[2];
		
		System.out.println("첫 번재 날짜를 입력하세요.");
		System.out.print("년도: ");
		int year = input.nextInt();
		System.out.print("월: ");
		int month = input.nextInt();
		System.out.print("일: ");
		int day = input.nextInt();
		
		dateList[0] = new Date(year, month, day);
		
		System.out.println("두 번재 날짜를 입력하세요.");
		System.out.print("년도: ");
		year = input.nextInt();
		System.out.print("월: ");
		month = input.nextInt();
		System.out.print("일: ");
		day = input.nextInt();
		
		dateList[1] = new Date(year, month, day);
		
		if(Date.compareDate(dateList[0], dateList[1]) == -1) {
			System.out.println("첫 번째 날짜인 " + dateList[0].toString() + "이 이른 날짜입니다.");
		} else if(Date.compareDate(dateList[0], dateList[1]) == 0) {
			System.out.println("두 날짜는 같은 날짜입니다.");
		} else {
			System.out.println("두 번째 날짜인 " + dateList[1].toString() + "이 이른 날짜입니다.");
		}
		
		input.close();
	}

}
