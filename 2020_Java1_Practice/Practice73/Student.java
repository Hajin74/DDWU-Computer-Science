/* 20200988 ��ǻ���а� ������
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
		result += "�й�: " + getId() + ", ";
		result += "��ϱ�: " + getTuition() + ", ";
		result += "��յ��: " + getGpa() + ", ";
		result += "���б�: " + this.calcScholarship();
		return result;
	}
	
	public int calcScholarship() {
		return (int)(getTuition() * 0.3);
	}
}
