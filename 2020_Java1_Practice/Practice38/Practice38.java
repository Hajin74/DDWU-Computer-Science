// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice38 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Person p1 = new Person();
		System.out.print("�赿�� ���̴�?");
		p1.age = input.nextInt();
		p1.name = "�赿��";
		p1.address = "����";
		
		Person p2 = new Person();
		System.out.print("ȫ�浿 ���̴�?");
		p2.age = input.nextInt();
		p2.name = "ȫ�浿";
		p2.address = "���";
		
		Person p3 = new Person();
		System.out.print("������ ���̴�?");
		p3.age = input.nextInt();
		p3.name = "������";
		p3.address = "����";
		
		System.out.println("��ü�� �����Դϴ�.");
		System.out.println(p1.name + " : " + p1.age + "��, " + p1.address);
		System.out.println(p2.name + " : " + p2.age + "��, " + p2.address);
		System.out.println(p3.name + " : " + p3.age + "��, " + p3.address);
		
		String midPerson;
		if((p1.age > p2.age && p1.age < p3.age) || (p1.age > p3.age && p1.age < p2.age)) {
			midPerson = p1.name;
		} else if ((p2.age > p1.age && p2.age < p3.age) || (p2.age > p3.age && p2.age < p1.age)) {
			midPerson = p2.name;
		} else {
			midPerson = p3.name;
		}
		
		System.out.println("���̰� �߰��� �����  " + midPerson + "�Դϴ�.");
	}

}
