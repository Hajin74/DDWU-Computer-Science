// 20200988 컴퓨터학과 유하진
package planet;

public class B extends A{
	public void accessTest() {
		System.out.println(pub);
		System.out.println(pro);
		System.out.println(def);
		//System.out.println(prv); // 동일한 패키지의 자식클래스 private: X
		
		F fobj = new F();
		fobj.accessTest();
		}
}
