// 20200988 ��ǻ���а� ������ #59
import java.util.Scanner;

public class Practice59 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("Animal ��ü animal�� �����մϴ�.");
		Animal a0 = new Animal();
		System.out.print("������ �߰��� ������ �Է��ϼ���: ");
		a0.picture = input.next();
		System.out.print("�����Ը� �Է��ϼ���: ");
		double w = input.nextDouble();
		a0.setWeight(w);
		a0.eat();
		System.out.println();
		
		System.out.println("\nLion ��ü buba�� �����մϴ�.");
		Lion l0 = new Lion();
		System.out.print("������ �߰��� ������ �Է��ϼ���: ");
		l0.picture = input.next();
		System.out.print("�����Ը� �Է��ϼ���: ");
		w = input.nextDouble();
		l0.setWeight(w);
		l0.roar2();
		System.out.println();
		
		System.out.println("\nEagle��ü paco�� �����մϴ�.");
		Eagle e0 = new Eagle();
		System.out.print("������ �߰��� ������ �Է��ϼ���: ");
		e0.picture = input.next();
		System.out.print("�����Ը� �Է��ϼ���: ");
		w = input.nextDouble();
		e0.setWeight(w);
		e0.fly2();
		
		System.out.println("\nAnimal ��ü animal�� �����Դϴ�.");
		System.out.println(a0.toString());
		System.out.println("Lion ��ü buba�� �����Դϴ�.");
		System.out.println(l0.toString());
		System.out.println("Eagle ��ü paco�� �����Դϴ�.");
		System.out.println(e0.toString());
		
		input.close();
	}
}
