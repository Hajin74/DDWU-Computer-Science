// 20200988 컴퓨터학과 유하진, 63

public class BankAccount {
	private String owner;
	private int balance;
	
	public BankAccount() {
		this("모름", -1);
	}
	
	public BankAccount(String owner, int balance) {
		this.owner = owner;
		this.balance = balance;
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
	
	public void deposit(int money) throws NegativeBalanceException { // 입금
		if(money < 0) {
			throw (new NegativeBalanceException());
		}
		
		this.balance += money;
	}
	
	public void withdraw(int money) throws NegativeBalanceException { // 출금
		if(this.balance < money) {
			throw (new NegativeBalanceException());
		} else if(money < 0) {
			throw (new NegativeBalanceException());
		}
		
		this.balance -= money;
	}
}
