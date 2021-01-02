/* 20200988 컴퓨터학과 유하진
 * #72
 */
public class Undergraduate extends Student{
	private int year;
	
	public Undergraduate(int year) {
		this(0, 0, 0, year);
	}
	
	public Undergraduate(int id, int tuition, double gpa, int year) {
		super(id, tuition, gpa);
		setYear(year);
	}
	
	public void setYear(int year) {
		this.year = year;
	}
	
	public int getYear() {
		return year;
	}
	
	public String toString() {
		String result = "";
		result += "학번: "+ getId() + ", ";
		result += "등록금: "+ getTuition() + ", ";
		result += "평균등급: "+ getGpa() + ", ";
		result += "학년: "+ getYear();
		return result;
	}
}
