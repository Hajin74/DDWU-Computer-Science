// 컴퓨터학과 20200988 유하진
import java.util.Scanner;
public class Practice22 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("정수를 입력하세요 : ");
		int num = input.nextInt();
		int absNum = abs(num);
		System.out.println("입력된 정수 " + num + "의 절대값은 " + absNum +"입니다.");
		
		input.close();
	}
	
	public static int abs(int num) {
		
		if(num > 0) {
			return num;			
		} else {
			return -num;
		}
		
	}

}
