/* 20200988 ��ǻ���а� ������
 * #73
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
		String result = super.toString();
		result += ", �г�: "+ getYear();
		return result;
	}
	
	public int calcScholarship() {
		int total = super.calcScholarship();
		total += getTuition() * 0.1;
		return total;
	}
}
