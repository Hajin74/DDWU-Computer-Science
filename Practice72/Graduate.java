/* 20200988 컴퓨터학과 유하진
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
		result += "학번: "+ getId() + ", ";
		result += "등록금: "+ getTuition() + ", ";
		result += "평균등급: "+ getGpa() + ", ";
		result += "학년: "+ getLab();
		return result;
	}
}
