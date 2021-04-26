// 20200988 컴퓨터학과 유하진, 40
public class Practice40 {

	public static void main(String[] args) {
		Student s1 = new Student("홍길동", 20111234, "컴퓨터학");
		System.out.println("1번 학생의 정보");
		System.out.println(s1.printSafely());
		
		Student s2 = new Student("성춘향", 20121357, "국문학");
		System.out.println("2번 학생의 정보");
		System.out.println(s2.printSafely());
		
		Student s3 = new Student("이몽룡", 20101357, "컴퓨터학");
		System.out.println("3번 학생의 정보");
		System.out.println(s3.printSafely());
		
		compareInfo(s1, s2);
		compareInfo(s1, s3);
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
