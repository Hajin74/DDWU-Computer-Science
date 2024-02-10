/* 20200988 ��ǻ���а� ������
 * #72
 */
public class Graduate extends Student{
	private String lab;
	
	public Graduate(int id, int tuition, double gpa, String lab) {
		super(id, tuition, gpa);
		setLab(lab);
	}
	
	public Graduate(String lab) {
		this(0, 0, 0, lab);
	}
	
	public void setLab(String lab) {
		this.lab = lab;
	}
	
	public String getLab() {
		return lab;
	}
	
	public String toString() {
		String result = "";
		result += "�й�: "+ getId() + ", ";
		result += "��ϱ�: "+ getTuition() + ", ";
		result += "��յ��: "+ getGpa() + ", ";
		result += "�г�: "+ getLab();
		return result;
	}
}
