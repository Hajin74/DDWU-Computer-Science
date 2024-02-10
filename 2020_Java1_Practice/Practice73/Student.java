/* 20200988 컴퓨터학과 유하진
 * #73
 */
public class Student {
	private int id, tuition;
	private double gpa;
	
	public Student(int id) {
		this.id = id;
	}
	
	public Student(int id, int tuition, double gpa) {
		this(id);
		setTuition(tuition);
		setGpa(gpa);
	}
	
	public void setTuition(int tuition) {
		this.tuition = tuition;
	}
	
	public void setGpa(double gpa) {
		this.gpa = gpa;
	}
	
	public int getId() {
		return id;
	}
	
	public int getTuition() {
		return tuition;
	}
	
	public double getGpa() {
		return gpa;
	}
	
	public String toString() {
		String result = "";
		result += "학번: " + getId() + ", ";
		result += "등록금: " + getTuition() + ", ";
		result += "평균등급: " + getGpa() + ", ";
		result += "장학금: " + this.calcScholarship();
		return result;
	}
	
	public int calcScholarship() {
		return (int)(getTuition() * 0.3);
	}
}
