/* 20200988 컴퓨터학과 유하진
 * #81
 */
public class Graduate extends Student {
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
		String result = super.toString();
		result += ", 학년: "+ getLab();
		return result;
	}
	
	public int calcScholarship() {
		int total = (int)(getTuition() * 0.3);
		if(getGpa() >= 3.5) {
			total += (int)(getTuition() * 0.2);
			return total;
		} else {
			return total;
		}
	}
}
