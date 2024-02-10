//20200988 컴퓨터학과 유하진
package planet;

class F { // 같은 패키지 안에 있는 클래스들만 사용 가능
	void accessTest() {
		A aobj = new A();
		System.out.println(aobj.pub);
		System.out.println(aobj.pro);
		System.out.println(aobj.def);
		//System.out.println(aobj.prv);// 동일한 패키지의 자식클래스 private: X
		}
}
