// 컴퓨터학과 20200988 유하진
import java.util.Scanner;
import java.util.Random;

public class Practice15 {
	
	public static int whoswin(String com, String you) {
		if(com.equals(you)) {
			return 0;
		} else {
			if(com.equals("가위")) {
				if(you.equals("바위"))
					return 1;
				else
					return -1;
			} else if(com.equals("바위")) {
				if(you.equals("가위"))
					return -1;
				else
					return 1;
			} else {
				if(you.equals("가위"))
					return 1;
				else
					return -1;
			}
		}
	}
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		Random rg = new Random();
		
		int randomNum = rg.nextInt(3);
		String com;
		
		if(randomNum == 0)
			com = "가위";
		else if(randomNum == 1)
			com = "바위";
		else
			com = "보";
		System.out.println("컴퓨터의 생성: " + com);
		
		String user;
		do {
			System.out.print("당신의 입력: ");
			user = input.next();	
			
			if(!(user.equals("가위") || user.equals("바위") || user.equals("보"))) {
				System.out.println("잘못된 입력입니다. 다시 입력하세요.");
			}
		} while(!(user.equals("가위") || user.equals("바위") || user.equals("보")));
		
		int win = whoswin(com, user);
		if(win == -1)
			System.out.println("컴퓨터가 이겼습니다.");
		else if(win == 0)
			System.out.println("비겼습니다.");
		else
			System.out.println("당신이 이겼습니다.");
		
		input.close();
	}
	
}
