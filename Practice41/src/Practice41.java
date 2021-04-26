// 20200988 컴퓨터학과 유하진, 41
import java.util.Scanner;

public class Practice41 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("학생 숫자를 입력하세요: ");
		int num = input.nextInt();
		
		Student[] studentList = new Student[num];
		
		for(int i = 0; i < studentList.length; i++) {
			System.out.println(i + 1 + "번 학생의 정보");
			System.out.print("이름: ");
			String name = input.next();
			System.out.print("학번: ");
			long sid = input.nextInt();
			System.out.print("전공: ");
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
				System.out.println("\"" + s1.getName() + "\" 학생은 \"" + s2.getName() + "\" 학생과 전공은 같고, 학번은 빠릅니다." );
			} else {
				System.out.println("\"" + s1.getName() + "\" 학생은 \"" + s2.getName() + "\" 학생과 전공은 다르고, 학번은 빠릅니다." );
			}
		} else if(s1.isSenior(s2) == 0) {
			if(s1.equalsMajor(s2)) {
				System.out.println("\"" + s1.getName() + "\" 학생은 \"" + s2.getName() + "\" 학생과 전공은 같고, 학번은 같습니다." );
			} else {
				System.out.println("\"" + s1.getName() + "\" 학생은 \"" + s2.getName() + "\" 학생과 전공은 다르고, 학번은 같습니다." );
			}
		} else {
			if(s1.equalsMajor(s2)) {
				System.out.println("\"" + s1.getName() + "\" 학생은 \"" + s2.getName() + "\" 학생과 전공은 같고, 학번은 느립니다." );
			} else {
				System.out.println("\"" + s1.getName() + "\" 학생은 \"" + s2.getName() + "\" 학생과 전공은 다르고, 학번은 느립니다." );
			}
		}
	}

}
