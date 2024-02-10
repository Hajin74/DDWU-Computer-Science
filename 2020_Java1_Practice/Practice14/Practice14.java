// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice14 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		System.out.print("문자를 입력하세요: ");
		String str = input.next();
		
		switch(str)
		{
			case "a":
			case "e":
			case "i":
			case "o":
			case "u":
			case "A":
			case "E":
			case "I":
			case "O":
			case "U":
				System.out.println("모음입니다.");
				break;
			default :
				System.out.println("자음입니다.");
				break;
		}

		input.close();
	}

}
