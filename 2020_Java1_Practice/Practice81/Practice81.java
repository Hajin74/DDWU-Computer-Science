/* 20200988 컴퓨터학과 유하진
 * #81
 */
public class Practice81 {
	public static void main(String[] args) {
		Undergraduate u0 = new Undergraduate(2222, 100, 4.1, 3);
		System.out.println(u0.toString());
		
		Graduate g0 = new Graduate(3333, 100, 3.4, "SE");
		System.out.println(g0.toString());
		
		Graduate g1 = new Graduate(5555, 100, 4.0, "OS");
		System.out.println(g1.toString());
		
		VisitingStudent v0 = new VisitingStudent(4444, 100, 2.5);
		System.out.println(v0.toString());
	}
}
