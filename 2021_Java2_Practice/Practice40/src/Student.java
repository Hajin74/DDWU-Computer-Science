// 20200988 컴퓨터학과 유하진, 40
public class Student extends Person {
	private long sid;
	private String major;
	
	Student() {
		super();
		this.sid = -1;
		this.major = "모름";
	}
	
	Student(String name) {
		super(name);
		this.sid = -1;
		this.major = "모름";
	}
	
	Student(String name, long sid) {
		super(name, -1);
		this.sid = sid;
		this.major = "모름";
	}
	
	Student(String name, long sid, String major) {
		super(name, -1, "모름");
		this.sid = sid;
		this.major = major;
	}
	
	public void setSid(long sid) {
		this.sid = sid;
	}
	
	public long getSid() {
		return sid;
	}
	
	public void setMajor(String major) {
		this.major = major;
	}
	
	public String getMajor() {
		return major;
	}
	
	public String toString() {
		String result = "";
		
		result += "이름: " + getName() + ", ";
		result += "나이: " + getAge() + "세, ";
		result += "주소: " + getAddress() + ", ";
		result += "학번: " + getSid() + ", ";
		result += "전공: " + getMajor();
		
		return result;
	}
	
	public String printSafely() {
		String result = "";
		
		result += "이름: " + getName() + ", ";
		result += "학번: " + getSid() + ", ";
		result += "전공: " + getMajor();
		
		return result;
	}
	
	public int isSenior(Student s) {
		if(this.getSid() < s.getSid()) {
			return -1;
		} else if(this.getSid() == s.getSid()) {
			return 0;
		} else {
			return 1;
		}
	}
	
	public boolean equalsMajor(Student s) {
		if(this.getMajor().equals(s.getMajor())) {
			return true;
		}
		return false;
	}
}

