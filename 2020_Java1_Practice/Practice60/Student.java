// 20200988 ��ǻ���а� ������ #60

public class Student extends Person{
	private int year;
	
	public int getYear() {
		return year;
	}
	
	public void setYear(int year) {
		this.year = year;
	}
	
	public String toString() {
		String result = "";
		result += getName() + " �л��� ";
		result += getYear() + "�г��Դϴ�.";
		return result;
	}
}
