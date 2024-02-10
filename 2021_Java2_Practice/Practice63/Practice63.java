// 20200988 컴퓨터학과 유하진, 63
import java.util.Scanner;


public class Practice63 {

	private static void getAccInfo(Scanner scan, BankAccount[] ba) {
		for(int i = 0; i < ba.length; i++) {
			ba[i] = new BankAccount();
			
			System.out.print("예금주 이름을 입력하세요: ");
			String name = scan.next();
			ba[i].setOwner(name);
			System.out.print("잔고를 입력하세요: ");
			int balance = scan.nextInt();
			ba[i].setBalance(balance);
		}
	}
	
	private static void printAccInfo(BankAccount[] ba) {
		System.out.println("\n현재 잔고현황입니다.");
		System.out.println("계좌번호\t계좌주\t잔고");
		for(int i = 0; i < ba.length; i++) {
			System.out.println(i + 1 + "\t" + ba[i].toString());
		}
	}
	
	private static int getAccNum(Scanner scan) throws NoSuchAccountException {
		System.out.print("업데이트할 계좌번호를 입력하세요 (종료-0): ");
		
		int acc = scan.nextInt();
		if(acc == 0 || acc == 1 || acc == 2 || acc == 3) {
			return acc;
		}
		
		throw (new NoSuchAccountException());
	}
	
	private static int getOperationNum(Scanner scan) throws NoSuchOperationException {
		System.out.print("원하는 작업을 선택하세요 (1-입급/2-출금)");
		
		int operation = scan.nextInt();
		if(operation == 1 || operation == 2) {
			return operation;
		}
		
		throw (new NoSuchOperationException());
	}
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		BankAccount[] list = new BankAccount[3];
		getAccInfo(input, list);
		
		int update = -1, work, money;
		do { // 현재 잔고 현황 무조건 한 번 출력
			
			printAccInfo(list);
			
			try {
				update = getAccNum(input);
				
				if(update != 0) { // 종료하지 않으면
					work = getOperationNum(input);
					
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
				
			} catch (NegativeBalanceException e) {
				System.out.println("입력된 금액이 잘못되었습니다. 다시 입력하세요.\n");
			} catch (NoSuchAccountException e) {
				System.out.println("잘못된 계좌번호 입니다. 다시 입력하세요.\n");
			} catch (NoSuchOperationException e) {
				System.out.println("잘못된 작업입니다. 다시 입력하세요.\n");
			}
			 
		} while(update != 0);
		
		System.out.println("프로그램을 종료합니다.");
		
		input.close();

	}

}
