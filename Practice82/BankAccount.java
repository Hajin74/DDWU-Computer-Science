// 20200988 컴퓨터학과 유하진, 82

public class BankAccount {
	private int account;
	private String owner;
	private int balance;
	
	public BankAccount() {
		this(-1, "모름", -1);
	}
	
	public BankAccount(int account, String owner, int balance) {
		this.account = account;
		this.owner = owner;
		this.balance = balance;
	}
	
	public void setAccount(int account) {
		this.account = account;
	}
	
	public int getAccount() {
		return account;
	}
	
	public void setOwner(String owner) {
		this.owner = owner;
	}
	
	public String getOwner() {
		return owner;
	}
	
	public void setBalance(int balance) {
		this.balance = balance;
	}
	
	public int getBalance() {
		return balance;
	}
	
	public String toString() {
		String result = "";
		
		result += getOwner() + "\t";
		result += getBalance();
		
		return result;
	}
	
	public void deposit(int money) { 
		this.balance += money;
	}
	
	public void withdraw(int money) { 
		this.balance -= money;
	}
}
