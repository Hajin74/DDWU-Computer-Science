/* 20200988 컴퓨터학과 유하진
 * #72
 */
public class Practice72 {
	public static void main(String[] args) {
		Student s0 = new Student(1111, 100, 3.2);
		System.out.println(s0.toString());
		
		Undergraduate u0 = new Undergraduate(2222, 100, 4.1, 3);
		System.out.println(u0.toString());
		
		Graduate g0 = new Graduate(3333, 100, 3.4, "SE");
		System.out.println(g0.toString());
	}
}
