// 컴퓨터학과 20200988 유하진
import java.util.Scanner;
import java.util.Random;

public class Practice14 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		Random rg = new Random();
		
		int randomNum = rg.nextInt(3);
		
		switch(randomNum) {
			case 0: 
				System.out.println("컴퓨터의 생성: 가위");
				break;
			case 1:
				System.out.println("컴퓨터의 생성: 바위");
				break;
			case 2:
				System.out.println("컴퓨터의 생성: 보");
				break;
		}
		
		String user;
		do {
			System.out.print("당신의 입력: ");
			user = input.next();	
			
			if(!(user.equals("가위") || user.equals("바위") || user.equals("보"))) {
				System.out.println("잘못된 입력입니다. 다시 입력하세요.");
			}
		} while(!(user.equals("가위") || user.equals("바위") || user.equals("보")));
		
		if(user.equals("가위")) {
			if(randomNum == 0) {
				System.out.println("비겼습니다.");
			} else if(randomNum == 1) {
				System.out.println("컴퓨터가 이겼습니다.");
			} else {
				System.out.println("당신이 이겼습니다.");
			}
		} else if(user.equals("바위")) {
			if(randomNum == 0) {
				System.out.println("당신이 이겼습니다.");
			} else if(randomNum == 1) {
				System.out.println("비겼습니다.");
			} else {
				System.out.println("컴퓨터가 이겼습니다.");
			}
		} else {
			if(randomNum == 0) {
				System.out.println("컴퓨터가 이겼습니다.");
			} else if(randomNum == 1) {
				System.out.println("당신이 이겼습니다.");
			} else {
				System.out.println("비겼습니다.");
			}
		}
		
		input.close();
	}

}
