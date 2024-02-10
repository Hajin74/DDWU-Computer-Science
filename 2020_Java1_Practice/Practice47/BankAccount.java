// 20200988 ��ǻ���а� ������, 47
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
		result += "�̸� : " + getName();
		result += "\n���� ��ȣ : " + getAccountNo();
		result += "\n�ܾ�: " + getBalance() + "��\n";
		result += "������ : " + getRate() + "%\n";
		result += "����: " + calcInterest() + "��";
		return result;
	}
	
	private int calcInterest() {
		return (int)(getBalance() * getRate() / 100);
	}
}
