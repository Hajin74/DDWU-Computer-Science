// 20200988 컴퓨터학과 유하진 #60

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
		result += getName() + " 학생은 ";
		result += getYear() + "학년입니다.";
		return result;
	}
}
