// 20200988 ��ǻ���а� ������
package universe;
import planet.A;

public class D extends A{
	void accessTest() {
		System.out.println(pub); // �ٸ� ��Ű���� �ִ� �ڽ� Ŭ�������� public�� protexted�� ���� �����ϴ�.
		System.out.println(pro);
		//System.out.println(def);
		//System.out.println(prv);
		
		//F fobj = new F(); // �ٸ� ��Ű���� �ִ� dafault class�� ��ü ���� �Ұ��ϴ�.
		//fobj.accessTest();
		}
}
