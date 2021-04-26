// 20200988 컴퓨터학과 유하진
import java.util.Scanner;

public class Practice37 {

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
		
		for(int i = 0; i < dateList.length; i++) {
			System.out.println(i + 1 + "번째 날짜는 " + dateList[i].toString() + "입니다.");
		}

		input.close();
	}

}
