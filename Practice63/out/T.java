// 20200988 ��ǻ���а� ������
package out;

import planet.*;
import universe.*;

public class T {

	public static void main(String[] args) {
		B bobj = new B();
		bobj.accessTest();
		
		E eobj = new E();
		//eobj.accessTest(); // accessTest�� �ٸ� ��Ű���� �Ϲ� Ŭ������ default �޼ҵ�� ������ ������ �� ����.
		
		//F fobj = new F(); // �ٸ� ��Ű���� �ִ� F class�� public ���� �ʱ� ������ ��ü�� ������ �� ����.
	}
}
