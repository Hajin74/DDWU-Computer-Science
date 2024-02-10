// 컴퓨터학과 20200988 유하진
import java.util.Scanner;
import java.util.Random;

public class Practice16 {
	
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
		
		int win = 0, lose = 0, draw = 0;
		int randomNum;
		String com;
		String user;
		
		
		do {
			System.out.println("현재 당신의 전적: " + win + "승 " + lose + "패 " + draw + "무");
			
			randomNum = rg.nextInt(3);
			if(randomNum == 0)
				com = "가위";
			else if(randomNum == 1)
				com = "바위";
			else
				com = "보";
			System.out.println("컴퓨터의 생성: " + com);
			
			do {
				System.out.print("당신의 입력(가위/바위/보/그만): ");
				user = input.next();	
				
				if(!(user.equals("가위") || user.equals("바위") || user.equals("보") || user.equals("그만"))) {
					System.out.println("잘못된 입력입니다. 다시 입력하세요.");
				}
			} while(!(user.equals("가위") || user.equals("바위") || user.equals("보") || user.equals("그만")));
			
			int winner;
			if(user.equals("그만")) {
				System.out.println("프로그램을 종료합니다.");
			} else {
				winner = whoswin(com, user);
				
				if(winner == -1) {
					System.out.println("컴퓨터가 이겼습니다.");
					lose++;
				} else if(winner == 0) {
					System.out.println("비겼습니다.");
					draw++;
				}
				else {
					System.out.println("당신이 이겼습니다.");
					win++;
				}
			}
		} while(!user.equals("그만"));
		
		input.close();
	}

}
