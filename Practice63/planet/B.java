// 20200988 ��ǻ���а� ������
package planet;

public class B extends A{
	public void accessTest() {
		System.out.println(pub);
		System.out.println(pro);
		System.out.println(def);
		//System.out.println(prv); // ������ ��Ű���� �ڽ�Ŭ���� private: X
		
		F fobj = new F();
		fobj.accessTest();
		}
}
