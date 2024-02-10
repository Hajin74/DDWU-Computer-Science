// 20200988 컴퓨터학과 유하진
import java.util.Scanner;

public class Practice40 {

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
		
		String strBirth = birthday.toString();
		System.out.println("\n당신의 생일은 " + strBirth);
		String strAdult = adultday.toString();
		System.out.println("당신의 성년일은 " + strAdult);
		System.out.println("당신의 생일은 " + strBirth);

		input.close();
	}

}
