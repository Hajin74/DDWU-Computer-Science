// 20200988 컴퓨터학과 유하진, 47
import java.util.Scanner;

public class Practice47 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		BankAccount[] list = new BankAccount[3]; // 참조변수 선언, 배열 객체 생성
		
		for(int i = 0; i < list.length; i++) {
			list[i] = new BankAccount(); // 배열 요소 생성
			
			System.out.print("예금주 이름을 입력하세요: ");
			String name = input.next();
			list[i].setOwner(name);
			System.out.print("잔고를 입력하세요: ");
			int balance = input.nextInt();
			list[i].setBalance(balance);
		}
		
		int update, work, money;
		
		do { // 현재 잔고 현황 무조건 한 번 출력
			System.out.println("현재 잔고현황입니다.");
			System.out.println("계좌번호\t계좌주\t잔고");
			for(int i = 0; i < list.length; i++) {
				System.out.println(i + 1 + "\t" + list[i].toString());
			}
			
			System.out.print("업데이트할 계좌번호를 입력하세요 (종료-0): ");
			update = input.nextInt();
			
			if(update != 0) { // 종료하지 않으면
				System.out.print("원하는 작업을 선택하세요 (1-입급/2-출금)");
				work = input.nextInt();
				
				if(work == 1) {
					System.out.print("입금액을 입력하세요: ");
					money = input.nextInt();
					list[update - 1].deposit(money);
					System.out.println("입금이 완료되었습니다.");
				} else if(work == 2){
					System.out.print("출금액을 입력하세요: ");
					money = input.nextInt();
					list[update - 1].withdraw(money);
					System.out.println("출금이 완료되었습니다.");
				}
			}
			 
		} while(update != 0);
		
		System.out.println("프로그램을 종료합니다.");
		
		input.close();
	}

}
