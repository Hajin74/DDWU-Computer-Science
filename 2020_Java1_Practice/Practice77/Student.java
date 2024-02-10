/* 20200988 ��ǻ���а� ������
 * #77
 */
public class Student {
	private int id;
	private String name, major;
	
	public Student(int id) {
		this.id = id;
	}
	
	public Student(int id, String name, String major) {
		this(id);
		this.name = name;
		this.major = major;
	}
	
	public int getId() {
		return id;
	}
	
	public String toString() {
		String result = "";
		
		result += getId() + " / ";
		result += name + " / ";
		result += major;
		
		return result;
	}
	
	public boolean isTheSame(Student s) {
		if(id == s.getId()) {
			return true;
		} else {
			return false;
		}
	}
	
	public static void printInfo(Student sa, Student sb) {
		if(sa == sb) {
			System.out.println("���� ��ü");
		} else if(sa.getId() == sb.getId()) {
			System.out.println("�ٸ� ��ü/���� �й�");
		} else {
			System.out.println("�ٸ� ��ü/�ٸ� �й�");
		}
	}
}
