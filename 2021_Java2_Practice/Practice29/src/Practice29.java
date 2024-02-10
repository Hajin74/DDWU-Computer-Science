// 20200988 컴퓨터학과 유하진
public class Practice29 {

	public static void main(String[] args) {
		Person person1 = new Person("김동덕");
		
		person1.setAge(22);
		person1.setAddress("서울시");
		
		System.out.println(person1.toString());

		Person person2 = new Person("홍길동", 30);
		
		person2.setAddress("제주시");
		
		System.out.println(person2.toString());
		
		Person person3 = new Person("성춘향", 16, "남원시");
		
		System.out.println(person3.toString());
	}

}
