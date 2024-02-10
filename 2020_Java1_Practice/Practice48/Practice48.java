// 20200988 컴퓨터학과 유하진, 48
import java.util.Scanner;

public class Practice48 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Date dateObj = new Date();
		System.out.print("태어난 년도를 입력하세요: ");
		dateObj.setYear(input.nextInt());
		System.out.print("태어난 월 입력하세요: ");
		dateObj.setMonth(input.nextInt());
		System.out.print("태어난 날짜를 입력하세요: ");
		dateObj.setDay(input.nextInt());
		
		Date dateObj2 = new Date();
		dateObj2.setYear(dateObj.getYear() + 20);
		dateObj2.setMonth(dateObj.getMonth());
		dateObj2.setDay(dateObj.getDay());
		
		String result1 = dateObj.toString();
		System.out.println("당신의 생일은 " + result1);
		String result2 = dateObj2.toString();
		System.out.println("당신의 성년일은 " + result2);
		
		input.close();
	}
}
