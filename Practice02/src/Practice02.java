// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice02 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("화씨 온도를 입력하세요: ");
		int f = input.nextInt();
		double c = ((double)5/9) * (f-32);
		System.out.println("해당하는 섭씨 온도는 " + c + "입니다.");
		
		
		input.close();
	}

}
