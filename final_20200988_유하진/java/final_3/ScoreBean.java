/* 컴퓨터학과 20200988 유하진 크롬
 * ScoreBean.java
 */
package final_3;

public class ScoreBean {
	private String username;
	private String kor;
	private String eng;
	private String math;
	private String group;
	private String grade;
	
	static final String[] typeGroup = {"1학년", "2학년", "3학년"};
	
	public ScoreBean() {
		kor = "-1";
		eng = "-1";
		math = "-1";
	}
	
	public void calcGrade() {
		int sum = Integer.parseInt(kor) + Integer.parseInt(eng) + Integer.parseInt(math);
		double ave = (double)sum / 3; 
		
		if(ave >= 80) {
			grade = "A";
		} else if (ave >= 50) {
			grade = "B";
		} else {
			grade ="F";
		}
	}
	
	public String getGrade() {
		calcGrade();
		return grade;
	}
	
	public String getUsername() {
		return username;
	}
	public void setUsername(String username) {
		this.username = username;
	}
	public String getKor() {
		return kor;
	}
	public void setKor(String kor) {
		this.kor = kor;
	}
	public String getEng() {
		return eng;
	}
	public void setEng(String eng) {
		this.eng = eng;
	}
	public String getMath() {
		return math;
	}
	public void setMath(String math) {
		this.math = math;
	}
	public String getGroup() {
		return group;
	}
	public void setGroup(String group) {
		this.group = group;
	}
	
	
}
