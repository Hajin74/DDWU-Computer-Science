// 20200988 컴퓨터학과 유하진, 40
public class Person {
	private String name;
	private int age;
	private String address;
	
	Person() {
		this("모름");
	}
	
	Person(String name) {
		this(name, -1);
	}
	
	Person(String name, int age) {
		this(name, age, "모름");
	}
	
	Person(String name, int age, String address) {
		this.name = name;
		this.age = age;
		this.address = address;
	}
	
	public void setName(String name) {
		this.name = name;
	}
	
	public String getName() {
		return name;
	}
	
	public void setAge(int age) {
		this.age = age;
	}
	
	public int getAge() {
		return age;
	}
	
	public void setAddress(String address) {
		this.address = address;
	}
	
	public String getAddress() {
		return address;
	}
	
	public String toString() {
		String result = "";
		
		result += "이름: " + getName() + ", ";
		result += "나이: " + getAge() + "세, ";
		result += "주소: " + getAddress();
		
		return result;
	}
}
