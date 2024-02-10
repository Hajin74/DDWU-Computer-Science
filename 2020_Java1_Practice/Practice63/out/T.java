// 20200988 컴퓨터학과 유하진
package out;

import planet.*;
import universe.*;

public class T {

	public static void main(String[] args) {
		B bobj = new B();
		bobj.accessTest();
		
		E eobj = new E();
		//eobj.accessTest(); // accessTest가 다른 패키지의 일반 클래스의 default 메소드기 때문에 접근할 수 없다.
		
		//F fobj = new F(); // 다른 패키지에 있는 F class는 public 하지 않기 때문에 객체를 생성할 수 없다.
	}
}
