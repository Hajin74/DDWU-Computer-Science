// 20200988 컴퓨터학과 유하진, 62
import java.util.Scanner;

public class Practice62 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		BankAccount[] list = new BankAccount[3];
		
		for(int i = 0; i < list.length; i++) {
			list[i] = new BankAccount();
			
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
					System.out.println("입금이 완료되었습니다.\n");
				} else if(work == 2){
					System.out.print("출금액을 입력하세요: ");
					money = input.nextInt();
					
					try {
						list[update - 1].withdraw(money);
						System.out.println("출금이 완료되었습니다.");						
					} catch (NegativeBalanceException e) {
						System.out.println("입력된 금액이 잘못되었습니다. 다시 입력하세요.\n");
					}
				}
			}
			 
		} while(update != 0);
		
		System.out.println("프로그램을 종료합니다.");
		
		input.close();
	}

}
