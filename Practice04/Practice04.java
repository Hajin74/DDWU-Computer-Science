// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice04 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		double mile, kilo;
		
		System.out.print("원하는 마일을 입력하세요 : ");
		mile = input.nextDouble();
		kilo = mile * 1.609;
		System.out.println(mile + "마일은 " + kilo + "킬로미터 입니다.");
		
		input.close();
	}

}
