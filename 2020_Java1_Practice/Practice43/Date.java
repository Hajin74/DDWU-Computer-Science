// 20200988 컴퓨터학과 유하진, 43
public class Date {
	private int year;
	private int month;
	private int day;
	
	public String toString() {
		String rslt = "";
		rslt += year + "년 ";
		rslt += month + "월 ";
		rslt += day + "입니다.";
		
		return rslt;
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
