// 20200988 ��ǻ���а� ������, 48

public class Person implements Speakable{
	String name;
	int age;
	
	public Person(String name, int age) {
		this.name = name;
		this.age = age;
	}
	
	public void speak() {
		if(age >= 2) {
			System.out.println("�ȳ�");
		} else {
			System.out.println("����");
		}
	}
}
