// 20200988 ��ǻ���а� ������, 46B

public class GraduateStudent extends Student{
	private String lab; // ������
	
	public GraduateStudent() {
		this(1, 1, 1, "��");
	}
	
	public GraduateStudent(int id, int tuition, double gpa, String lab) {
		super(id, tuition, gpa);
		this.lab = lab;
	}
	
	public String getLab() {
		return lab;
	}
	
	public void setLab(String lab) {
		this.lab = lab;
	}
	
	public String toString() { 
		return super.toString() + ", ������: " + getLab();
	}

	public int scholarship() {
		if(getGpa() >= 3.5)
			return (int)(getTuition() * 0.5);
		else
			return (int)(getTuition() * 0.1);
	}
}