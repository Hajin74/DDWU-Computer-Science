// 20200988 컴퓨터학과 유하진
package universe;
import planet.A;

public class D extends A{
	void accessTest() {
		System.out.println(pub); // 다른 패키지에 있는 자식 클래스에는 public과 protexted만 접근 가능하다.
		System.out.println(pro);
		//System.out.println(def);
		//System.out.println(prv);
		
		//F fobj = new F(); // 다른 패키지에 있는 dafault class는 객체 생성 불가하다.
		//fobj.accessTest();
		}
}
