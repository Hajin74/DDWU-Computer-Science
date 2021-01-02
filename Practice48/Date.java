// 20200988 컴퓨터학과 유하진, 48
public class Date {
	private int year;
	private int month;
	private int day;
	
	public String toString() {
		String result = "";
		result += getYear() + "년 ";
		result += getMonth() + "월 " ;
		result += getDay() + "입니다.";
		return result;
	}
	
	public void setYear(int year) {
		this.year = year;
	}
	
	public void setMonth(int month) {
		this.month = month;
	}
	
	public void setDay(int day) {
		this.day = day;
	}
	
	public int getYear() {
		return year;
	}
	
	public int getMonth() {
		return month;
	}
	
	public int getDay() {
		return day;
	}
}
