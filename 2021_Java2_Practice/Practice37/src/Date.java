// 20200988 ��ǻ���а� ������, 37
public class Date {
	private int year;
	private int month;
	private int day;
	
	public Date() {
		this.year = 1990;
		this.month = 1;
		this.day = 1;
	}
	
	public Date(int year) {
		this.year = year;
		this.month = 1;
		this.day = 1;
	}
	
	public Date(int year, int month) {
		this.year = year;
		this.month = month;
		this.day = 1;
	}
	
	public Date(int year, int month, int day) {
		this.year = year;
		this.month = month;
		this.day = day;
	}
	
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
	
	protected boolean isReap() {
		if(getYear() % 400 == 0) {
			return true;
		} else if (getYear() % 100 == 0) {
			return false;
		} else if(getYear() % 4 == 0) {
			return true;
		} else {
			return false;
		}
	}
	
	public String testReapYears() {
		String result = "";
		
		if(isReap()) {
			result += getYear() + "�� �����Դϴ�.";
		} else {
			result += getYear() + "�� ������ �ƴմϴ�.";
		}
		
		return result;
	}
	
	public String printWestern() {
		String[] month = {"Januaray", "Febraury", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
		String result = "";
		
		result += month[getMonth() - 1] + " ";
		result += getDay() + ", ";
		result += getYear();
		
		return result;
	}
	
	public String toString() {
		String result = "";
		
		result += getYear() + "�� ";
		result += getMonth() + "�� ";
		result += getDay() + "��";
		
		return result;
	}
}
