// 20200988 ��ǻ���а� ������, 46A

public class Practice46A {
	
	public static void main(String[] args) {
		Student[] list = new Student[3];
		
		Student s1 = new Student(1111, 100, 3.2);
		UndergraduateStudent s2 = new UndergraduateStudent(2222, 100, 4.1, 3); 
		GraduateStudent s3 = new GraduateStudent(3333, 100, 3.4, "SE"); 
		
		list[0] = s1;
		list[1] = s2; // ���� ����ȯ
		list[2] = s3; // ���� ����ȯ
		
		printAll(list);
	}
	
	public static void printAll(Student[] s) {
		for(int i = 0; i < s.length; i++) {
			System.out.println(s[i].toString());
		}
	}
}
