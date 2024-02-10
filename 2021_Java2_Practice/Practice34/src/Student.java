// 20200988 ��ǻ���а� ������, 34

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
	
	public boolean isTheSame(Student s) {
		if(getSid() == s.getSid()) {
			return true;
		} else {
			return false;
		}
	}
}
