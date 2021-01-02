// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice31 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Data dataObj = new Data();
		System.out.print("태어난 년도를 입력하세요: ");
		dataObj.year = input.nextInt();
		System.out.print("태어난 월을 입력하세요: ");
		dataObj.month = input.nextInt();
		System.out.print("태어난 날짜를 입력하세요: ");
		dataObj.day = input.nextInt();
		System.out.println("당신의 생일은 " + dataObj.year +"년 " + dataObj.month + "월 " + dataObj.day +"일 입니다.");
		input.close();
	}

}
