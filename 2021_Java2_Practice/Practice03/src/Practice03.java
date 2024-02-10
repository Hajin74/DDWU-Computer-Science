// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice03 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("인치 값을 입력하세요: ");
		float inch = input.nextFloat();
		int cm = (int)(2.54 * inch);
		System.out.println("해당하는 센티미터 값은 " + cm + "입니다.");
		
		input.close();
	}

}
