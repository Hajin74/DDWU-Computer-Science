// 20200988 컴퓨터학과 유하진, 35
public class Date {
	private Integer year;
	private Integer month;
	private Integer day;
	
	public Date() {
		this(1990);
	}
	
	public Date(int year) {
		this(year, 1);
	}
	
	public Date(int year, int month) {
		this(year, month, 1);
	}
	
	public Date(int year, int month, int day) {
		this.year = year;
		this.month = month;
		this.day = day;
	}
	
	public void setYear(Integer year) {
		this.year = year;
	}
	
	public Integer getYear() {
		return year;
	}
	
	public void setMonth(Integer month) {
		this.month = month;
	}
	
	public Integer getMonth() {
		return month;
	}
	
	public void setDay(Integer day) {
		this.day = day;
	}
	
	public Integer getDay() {
		return day;
	}
	
	public String toString() {
		String result = "";
		
		result += getYear() + "년 ";
		result += getMonth() + "월 ";
		result += getDay() + "일";
		
		return result;
	}
}
