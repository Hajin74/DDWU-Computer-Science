// 20200988 컴퓨터학과 유하진
package universe;
import planet.A;

public class E {
	void accessTest() {
		A aobj = new A();
		System.out.println(aobj.pub);// 다른 패키지 일반 클래스 public만 접근 가능
		//System.out.println(aobj.pro); 
		//System.out.println(aobj.def);
		//System.out.println(aobj.prv);
		
		//F fobj = new F();// 다른 패키지 클래스: X
		//fobj.accessTest();
		}
}
