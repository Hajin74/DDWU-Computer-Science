// 20200988 ��ǻ���а� ������, 25

public class Date {
	private int year;
	private int month;
	private int day;
	
	public void setYear(int year) {
		this.year = year;
	}
	
	public int getYear() {
		return year;
	}
	
	public void setMonth(int month) {
		this.month = month;
	}
	
	public int getMonth() {
		return month;
	}
	
	public void setDay(int day) {
		this.day = day;
	}
	
	public int getDay() {
		return day;
	}
	
	public String toString() {
		String result = "";
		
		result += getYear() + "�� ";
		result += getMonth() + "�� ";
		result += getDay() + "��";
		
		return result;
	}
}
