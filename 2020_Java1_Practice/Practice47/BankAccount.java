// 20200988 컴퓨터학과 유하진, 47
public class BankAccount {
	private String name, accountNo;
	private int balance;
	private double rate;
	
	public void setName(String name) {
		this.name = name;
	}
	
	public void setAccountNo(String accountNo) {
		this.accountNo = accountNo;
	}
	
	public void setBalance(int balance) {
		this.balance = balance;
	}
	
	public void setRate(double rate) {
		this.rate = rate;
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
	
	public double getRate() {
		return rate;
	}
	
	public String toString() {
		String result = "";
		result += "이름 : " + getName();
		result += "\n계좌 번호 : " + getAccountNo();
		result += "\n잔액: " + getBalance() + "원\n";
		result += "이자율 : " + getRate() + "%\n";
		result += "이자: " + calcInterest() + "원";
		return result;
	}
	
	private int calcInterest() {
		return (int)(getBalance() * getRate() / 100);
	}
}
