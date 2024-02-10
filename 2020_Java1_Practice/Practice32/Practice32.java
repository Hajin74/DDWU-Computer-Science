// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice32 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Data birthday = new Data();
		System.out.print("태어난 년도를 입력하세요: ");
		birthday.year = input.nextInt();
		System.out.print("태어난 월을 입력하세요: ");
		birthday.month = input.nextInt();
		System.out.print("태어난 날짜를 입력하세요: ");
		birthday.day = input.nextInt();
		
		Data adultday = new Data();
		adultday.year = birthday.year + 20;
		adultday.month = birthday.month;
		adultday.day = birthday.day;
		
		System.out.println("당신의 생일은 " + birthday.year +"년 " + birthday.month + "월 " + birthday.day +"일 입니다.");
		System.out.println("당신의 성년일은 " + adultday.year +"년 " + adultday.month + "월 " + adultday.day +"일 입니다.");
		System.out.println("당신의 생일은 " + birthday.year +"년 " + birthday.month + "월 " + birthday.day +"일 입니다.");
		
		input.close();
	}

}
