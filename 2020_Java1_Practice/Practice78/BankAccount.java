import java.util.Random;

/* 20200988 컴퓨터학과 유하진
 * #78
 */
public class BankAccount {
	Random rg = new Random();
	
	private String name, accountNo;
	private int balance;
	private double interest;
	
	public void setName(String name) {
		this.name = name;
	}
	
	public void setAccountNo(String accountNo) {
		this.accountNo = accountNo;
	}
	
	public void setBalance(int balance) {
		this.balance = balance;
	}
	
	public void setInterest(double interest) {
		this.interest = interest;
	}

	public String getName() {
		return name;
	}
	
	public String getAccountNo() {
		return accountNo;
	}
	
	public int getBalance() {
		return balance;
	}
	
	public double getInterest() {
		return interest;
	}
	
	public BankAccount() {
		this.name = "모름";
		this.balance = 0;
		this.interest = 0;
		this.accountNo = makeID();
	}
	
	public BankAccount(String name, int balance) {
		this.name = name;
		this.balance = balance;
		this.interest = 0;
		this.accountNo = makeID();
	}
	
	public BankAccount(String name, int balance, double interest) {
		this.name = name;
		this.balance = balance;
		this.interest = interest;
		this.accountNo = makeID();
	}
	
	private String makeID() {
		String result = "";
		int r1 = rg.nextInt(9000) + 1000;
		int r2 = rg.nextInt(9000) + 1000;
		
		result += r1 + " - " + r2;
		
		return result;
	}
	
	public String toString() {
		String result = "";
		
		result += getAccountNo() + " :: ";
		result += getName() + " :: ";
		result += getBalance() + "원 :: ";
		result += getInterest() + "%";
		
		return result;
	}
	
	public boolean deposit(int money) { // 주어진 금액의 돈을 입금하는 메소드
		if(money < 0) {
			return false;
		} else {
			return true;
		}
	}
	
	public boolean withdraw(int money) {
		if(balance < money) {
			return false;
		} else {
			return true;
		}
	}
	
	public static boolean transfer(BankAccount from, BankAccount to, int money) {
		if(from.withdraw(money)) {
			if(to.deposit(money)) {
				return true;
			} else {
				return false;
			}
		} else {
			return false;
		}
	}
	
	public boolean transfer(BankAccount otherAccount, int amount) {
		if(withdraw(amount)) {
			if(otherAccount.deposit(amount)) {
				balance -= amount;
				otherAccount.setBalance(otherAccount.getBalance() + amount);
				return true;
			} else {
				return false;
			}
		} else {
			return false;
		}
	}
}
