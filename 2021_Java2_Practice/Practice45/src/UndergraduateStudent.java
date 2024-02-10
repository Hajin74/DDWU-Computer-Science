// 20200988 ��ǻ���а� ������, 45

public class UndergraduateStudent extends Student{
	private int year; // �г�
	
	// 1. ������
	public UndergraduateStudent(int id, int tuition, double gpa, int year) {
		super(id, tuition, gpa);
		this.year = year;
	}
	
	// 2. �����ڿ� ������
	public void setYear(int year) {
		this.year = year;
	}
	
	public int getYear() {
		return year;
	}
	
	// 3. toString() �޼ҵ� ������
	public String toString() {
		return super.toString() + ", �г�: " + getYear();
	}
	
	// 4. scholarship() �޼ҵ� ������
	public int scholarship() {
		return (int)(getTuition() * 0.3);
	}
}
