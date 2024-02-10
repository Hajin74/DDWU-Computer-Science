// 20200988 컴퓨터학과 유하진, 51

public class Practice51 {

	public static void main(String[] args) {
		Shape s = new Shape();
		Rectangle r = new Rectangle();
		Triangle t = new Triangle();
		
		System.out.println(s instanceof Shape); // true, 참조변수 s가 가리키는 객체는 Shape 그 자체이기 때문.
		System.out.println(s instanceof Rectangle); // false, 둘이 상속관계이기는 하지만 참조 변수 s가 가리키는 객체는 Rectangle 아니다.
		System.out.println(s instanceof Triangle); // false, 둘이 상속관계이기는 하지만 참조 변수 s가 가리키는 객체는 Triangle 아니다.
		System.out.println(s instanceof Movable); // true, 자식클래스는 부모클래스를 포함하고 있다, movable은 참조변수 s가 가르키는 객체 Shape가 포함하고 있기 때문에 movale 가리키기도 한다.
		System.out.println(s instanceof Drawable); // false, s가 가리키는 객체 Shape는 Drawable 인터페이스를 구현하지 않았다. 상속관계가 아닌데도 drawable은 인터페이스이기 때문에 컴파일 에러가 나지 않는 것일까?
		System.out.println();
		
		
		
		System.out.println(r instanceof Shape); // true, r이 가리키는 rectangle클래스는 shape클래스를 포함하기 때문에
		System.out.println(r instanceof Rectangle); // true, r이 가리키는 객체가 rectangle 그 자체
		//System.out.println(r instanceof Triangle); // compile error, r이 가르키는 객체와 triangle은 상속관계가 아님.
		System.out.println(r instanceof Movable); // true, r이 가리키는 객체인 rectangle이 movable을 포함하고 있음.
		System.out.println(r instanceof Drawable); // true, r이 가리키는 객체인 rectangle이 drawble을 구현했기 때문에 즉, r이 자식 클래스이기 떄문에 .
		System.out.println();
		
		
		System.out.println(t instanceof Shape); // true, Shape 클래스는 Triangle 클래스의 부모 클래스이다.
		//System.out.println(t instanceof Rectangle); // compile error, 둘이 상속관계가 아니다.
		System.out.println(t instanceof Triangle); // true, 당연히
		System.out.println(t instanceof Movable); // true, 부모 클래스인 Shape 클래스가 Movable 인터페이스를 구현 했기 때문에 맞다.
		System.out.println(t instanceof Drawable); // true, 해당 클래스가 Drawable 인터페이스를 구현했기 때문에 맞다.

	}

}
