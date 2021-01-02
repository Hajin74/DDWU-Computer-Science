// 20200988 컴퓨터학과 유하진, 53
import java.util.Random;
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
	
	private int calcInterest() {
		int result;
		
		result = (int)(getBalance() * getInterest() / 100);
		
		return result;
	}
	
	public String toString() {
		String result = "";
		result += "이름 : " + getName();
		result += "\n계좌 번호 : " + getAccountNo();
		result += "\n잔액: " + getBalance() + "원\n";
		result += "이자율 : " + getInterest() + "%\n";
		result += "이자: " + calcInterest() + "원";
		return result;
	}
	
	
}
