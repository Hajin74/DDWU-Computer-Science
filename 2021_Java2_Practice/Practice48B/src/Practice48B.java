// 20200988 ��ǻ���а� ������, 48B
public class Practice48B {

	public static void main(String[] args) {
		Speakable myDog = new Dog();
		Speakable p1 = new Person("�赿��", 1);
		Speakable p2 = new Person("ȫ�浿", 20);
		
		speak3Times(myDog);
		speak3Times(p1);
		speak3Times(p2);
	}
	
	public static void speak3Times(Speakable s) {
		for(int i = 0; i < 3; i++) {
			s.speak();
		}
	}

}
