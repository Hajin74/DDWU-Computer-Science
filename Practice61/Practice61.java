// 20200988 컴퓨터학과 유하진, 61
import java.util.Scanner;

public class Practice61 {

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
	
	static String getInput(Scanner s) throws InvalidInputException {
		String user = s.next();
		
		if(user.equals("가위") || user.equals("바위") || user.equals("보")) {
			return user;
		} 
		throw(new InvalidInputException());
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		System.out.println("컴퓨터의 생성: 가위");
		
		boolean correctInput = false;
		
		while(correctInput == false) {
			try {
				System.out.print("당신의 입력: ");
				String user = getInput(s);	
				
				correctInput = true;
				
				if(whoswin("가위", user) == 0) {
					System.out.println("비겼습니다.");
				} else if(whoswin("가위", user) == 1) {
					System.out.println("당신이 이겼습니다.");
				} else if(whoswin("가위", user) == -1) {
					System.out.println("컴퓨터가 이겼습니다.");
				}
				
			} catch (InvalidInputException e) {
				System.out.println("잘못된 입력입니다. 다시 입력하세요: ");
				
				continue;
			} 
		}
		
		s.close();
	}
	
}
