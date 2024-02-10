// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice13 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		String user1, user2;
		
		do {
			System.out.print("철수의 입력: ");
			user1 = input.next();	
			
			if(!(user1.equals("가위") || user1.equals("바위") || user1.equals("보"))) {
				System.out.println("잘못된 입력입니다. 다시 입력하세요.");
			}
		} while(!(user1.equals("가위") || user1.equals("바위") || user1.equals("보")));
		
		do {
			System.out.print("영희의 입력: ");
			user2 = input.next();	
			
			if(!(user2.equals("가위") || user2.equals("바위") || user2.equals("보"))) {
				System.out.println("잘못된 입력입니다. 다시 입력하세요.");
			}
		} while(!(user2.equals("가위") || user2.equals("바위") || user2.equals("보")));
		
		if(user1.equals("가위")) {
			if(user2.equals("가위")) {
				System.out.println("비겼습니다.");
			} else if(user2.equals("바위")) {
				System.out.println("영희가 이겼습니다.");
			} else {
				System.out.println("철수가 이겼습니다.");
			}	
		} else if(user1.equals("바위")) {
			if(user2.equals("가위")) {
				System.out.println("철수가 이겼습니다.");
			} else if(user2.equals("바위")) {
				System.out.println("비겼습니다.");
			} else {
				System.out.println("영희가 이겼습니다.");
			}
		} else {
			if(user2.equals("가위")) {
				System.out.println("영희가 이겼습니다.");
			} else if(user2.equals("바위")) {
				System.out.println("철수가 이겼습니다.");
			} else {
				System.out.println("비겼습니다.");
			}
		}
		
		input.close();
	}
	
}
