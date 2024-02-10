
public class Practice_instanceof {

	public static void main(String[] args) {
		Shape s = new Shape();
		Rectangle r = new Rectangle();
		r = (Rectangle)s;
		
		
		
		
		//Drawable d = t;
		//System.out.println(d instanceof Shape); // true
		//System.out.println(d instanceof Movable); // true
		//System.out.println(d instanceof Rectangle); // false
		//System.out.println(d instanceof Triangle); // true
		//System.out.println(d instanceof Drawable); // true
		
		
		//Drawable d = r; // 상향형변환
		//System.out.println(d instanceof Shape); // t
		//System.out.println(d instanceof Movable); // true
		//System.out.println(d instanceof Rectangle); // true
		//System.out.println(d instanceof Triangle); // false
		//System.out.println(d instanceof Drawable); // true
		
		
		//!!!r = (Rectangle)s; // 하향 형변환아예 안됨
		//System.out.println(r instanceof Shape); // true
		//System.out.println(r instanceof Rectangle); // false
		//System.out.println(r instanceof Triangle); // error,참조변수의 타입과 Triangle은 상속관계가 아님
		//System.out.println(r instanceof Movable); // true
		//System.out.println(r instanceof Drawable); // false
		
		//r = new Rectangle();
		//System.out.println(r instanceof Shape); // true
		//System.out.println(r instanceof Rectangle); // true
		//System.out.println(r instanceof Triangle); // error
		//System.out.println(r instanceof Movable); // true
		//System.out.println(r instanceof Drawable); // true
		
		//s = new Triangle();
		//System.out.println(s instanceof Shape); // true
		//System.out.println(s instanceof Triangle); // true
		//System.out.println(s instanceof Rectangle); // false
		//System.out.println(s instanceof Movable); // true
		//System.out.println(s instanceof Drawable); // true
		
		//s = new Rectangle();
		//System.out.println(s instanceof Shape); // true
		//System.out.println(s instanceof Rectangle); // true
		//System.out.println(s instanceof Triangle); // false
		//System.out.println(s instanceof Movable); // true
		//System.out.println(s instanceof Drawable); // true
		
		//Shape s = new Shape(); 
		//System.out.println(s instanceof Shape); // true
		//System.out.println(s instanceof Movable); // true
		//System.out.println(s instanceof Rectangle); // false
		//System.out.println(s instanceof Triangle); // false
		//System.out.println(s instanceof Drawable); // drawble은 클래스가 아니라 인터페이스라 error는 안남, 인터페이스는 객체 못만듬
		
		// m = new Shape();
		//System.out.println(m instanceof Shape); // true
		//System.out.println(m instanceof Movable); // true
		//System.out.println(m instanceof Rectangle); // false
		//System.out.println(m instanceof Triangle); // false
		//System.out.println(m instanceof Drawable); // error
		//System.out.println();
		
		//m = new Rectangle();
		//System.out.println(m instanceof Shape); // true
		//System.out.println(m instanceof Movable); // true
		//System.out.println(m instanceof Rectangle); // true
		//System.out.println(m instanceof Triangle); // false
		//System.out.println(m instanceof Drawable); // true
		
		//m = new Triangle();
		//System.out.println(m instanceof Shape); // true
		//System.out.println(m instanceof Movable); // true
		//System.out.println(m instanceof Triangle); // true
		//System.out.println(m instanceof Rectangle); // false
		//System.out.println(m instanceof Drawable); // true

	}

}
