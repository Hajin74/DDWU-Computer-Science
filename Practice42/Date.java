// 20200988 ��ǻ���а� ������, 42
public class Date {
	int year;
	int month;
	int day;
	
	public String toString() {
		String rslt = "";
		rslt += year + "�� ";
		rslt += month + "�� ";
		rslt += day + "�Դϴ�.";
		
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
}
