// 20200988 ��ǻ���а� ������, 41
import java.util.Scanner;

public class Practice41 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("�л� ���ڸ� �Է��ϼ���: ");
		int num = input.nextInt();
		
		Student[] studentList = new Student[num];
		
		for(int i = 0; i < studentList.length; i++) {
			System.out.println(i + 1 + "�� �л��� ����");
			System.out.print("�̸�: ");
			String name = input.next();
			System.out.print("�й�: ");
			long sid = input.nextInt();
			System.out.print("����: ");
			String major = input.next();
			
			studentList[i] = new Student(name, sid, major);
		}
		
		for(int i = 0; i < studentList.length; i++) {
			System.out.println("[" + (i + 1) + "]" + studentList[i].printSafely());
		}
		
		for(int i = 1; i < studentList.length; i++) {
			compareInfo(studentList[0], studentList[i]);
		}
		
		input.close();
	}
	
	public static void compareInfo(Student s1, Student s2) {
		if(s1.isSenior(s2) == -1) {
			if(s1.equalsMajor(s2)) {
				System.out.println("\"" + s1.getName() + "\" �л��� \"" + s2.getName() + "\" �л��� ������ ����, �й��� �����ϴ�." );
			} else {
				System.out.println("\"" + s1.getName() + "\" �л��� \"" + s2.getName() + "\" �л��� ������ �ٸ���, �й��� �����ϴ�." );
			}
		} else if(s1.isSenior(s2) == 0) {
			if(s1.equalsMajor(s2)) {
				System.out.println("\"" + s1.getName() + "\" �л��� \"" + s2.getName() + "\" �л��� ������ ����, �й��� �����ϴ�." );
			} else {
				System.out.println("\"" + s1.getName() + "\" �л��� \"" + s2.getName() + "\" �л��� ������ �ٸ���, �й��� �����ϴ�." );
			}
		} else {
			if(s1.equalsMajor(s2)) {
				System.out.println("\"" + s1.getName() + "\" �л��� \"" + s2.getName() + "\" �л��� ������ ����, �й��� �����ϴ�." );
			} else {
				System.out.println("\"" + s1.getName() + "\" �л��� \"" + s2.getName() + "\" �л��� ������ �ٸ���, �й��� �����ϴ�." );
			}
		}
	}

}
