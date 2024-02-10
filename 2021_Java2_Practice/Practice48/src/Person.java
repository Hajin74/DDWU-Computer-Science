// 20200988 컴퓨터학과 유하진, 48

public class Person implements Speakable{
	String name;
	int age;
	
	public Person(String name, int age) {
		this.name = name;
		this.age = age;
	}
	
	public void speak() {
		if(age >= 2) {
			System.out.println("안녕");
		} else {
			System.out.println("응애");
		}
	}
}
