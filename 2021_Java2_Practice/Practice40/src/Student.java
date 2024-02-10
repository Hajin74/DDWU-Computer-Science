// 20200988 ��ǻ���а� ������, 40
public class Student extends Person {
	private long sid;
	private String major;
	
	Student() {
		super();
		this.sid = -1;
		this.major = "��";
	}
	
	Student(String name) {
		super(name);
		this.sid = -1;
		this.major = "��";
	}
	
	Student(String name, long sid) {
		super(name, -1);
		this.sid = sid;
		this.major = "��";
	}
	
	Student(String name, long sid, String major) {
		super(name, -1, "��");
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
		
		result += "�̸�: " + getName() + ", ";
		result += "����: " + getAge() + "��, ";
		result += "�ּ�: " + getAddress() + ", ";
		result += "�й�: " + getSid() + ", ";
		result += "����: " + getMajor();
		
		return result;
	}
	
	public String printSafely() {
		String result = "";
		
		result += "�̸�: " + getName() + ", ";
		result += "�й�: " + getSid() + ", ";
		result += "����: " + getMajor();
		
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

