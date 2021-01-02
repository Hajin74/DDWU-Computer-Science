/* 20200988 컴퓨터학과 유하진
 * #77
 */
public class Practice77 {
	public static void main(String[] args) {
		Student p1 = new Student(20111234, "홍길동", "컴퓨터학");
		Student p2 = new Student(20121357, "성춘향", "국문학");
		Student p3 = new Student(20121357, "성춘향", "국문학");
		Student p4 = p1; // p4는 객체 p1을 가리킴
		
		System.out.println("객체 p1의 정보");
		System.out.println(p1.toString() + "\n");
		System.out.println("객체 p1의 정보");
		System.out.println(p2.toString() + "\n");
		System.out.println("객체 p1의 정보");
		System.out.println(p3.toString() + "\n");
		System.out.println("객체 p1의 정보");
		System.out.println(p4.toString() + "\n");
		
		Student.printInfo(p1, p2);
		Student.printInfo(p2, p2);
		Student.printInfo(p2, p3);
		Student.printInfo(p1, p4);
	}
}
