// 20200988 컴퓨터학과 유하진, 52

public class Practice52 {

	public static void main(String[] args) {
		Movable[] rArray = new Movable[2];
		
		rArray[0] = new Rectangle();
		rArray[1] = new Triangle();

		System.out.println(rArray[0] instanceof Rectangle); // true, rArray[0](movable타입)이 가리키는 객체는 rectangle임.
		System.out.println(rArray[0] instanceof Triangle); // !!false, rArray[0](movable타입)은 shape클래스의 부모클래스이고, triangle은 shape의 자식클래스이기 때문에 서로 상속관계이기는 하지만, rArray[0]참조변수는 rectangle객체를 가리킴
		System.out.println(rArray[0] instanceof Movable); // true, rArray[0]가 가리키는 객체 rec의 부모클래스가 movale인터페이스를 상속받았기 때문에 가리킴
		System.out.println(rArray[0] instanceof Drawable); // true, rArray[0]가 가리키는 객체 rec이  drawable인터페이스를 상속받았기 때문에 가리킴
		
		System.out.println();
		
		System.out.println(rArray[1] instanceof Rectangle); // false, 참조 변수 rarray[1]이 가리키는 개체는 triangle임. rectangle과 참조변수가 상속관계이기는 해서 컴파일 에러가 일어나지 않음
		System.out.println(rArray[1] instanceof Triangle); // true, triangle 클래스의 객체를 담고 있음
		System.out.println(rArray[1] instanceof Movable); // true, triangle 클래스의 부모클래스가 movable 인터페이스를 구현했음
		System.out.println(rArray[1] instanceof Drawable); // true, 해당 클래스 drawble 인터페이스를 구현했음

	}

}
