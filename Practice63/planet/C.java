// 20200988 컴퓨터학과 유하진
package planet;

public class C {
	void accessTest() {
		A aobj = new A();
		System.out.println(aobj.pub);
		System.out.println(aobj.pro);
		System.out.println(aobj.def);
		//System.out.println(aobj.prv); // 동일한 패키지에 일반 클래스에 있는 private 변수에 접근할 수 없다.
		
		F fobj = new F();
		fobj.accessTest();
		}
}
