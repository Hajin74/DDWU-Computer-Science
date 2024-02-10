// 20200988 컴퓨터학과 유하진, 45

public class UndergraduateStudent extends Student{
	private int year; // 학년
	
	// 1. 생성자
	public UndergraduateStudent(int id, int tuition, double gpa, int year) {
		super(id, tuition, gpa);
		this.year = year;
	}
	
	// 2. 접근자와 설정자
	public void setYear(int year) {
		this.year = year;
	}
	
	public int getYear() {
		return year;
	}
	
	// 3. toString() 메소드 재정의
	public String toString() {
		return super.toString() + ", 학년: " + getYear();
	}
	
	// 4. scholarship() 메소드 재정의
	public int scholarship() {
		return (int)(getTuition() * 0.3);
	}
}
