// 20200988 ��ǻ���а� ������, 64
import java.util.Scanner;

public class Practice64 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("MyBox�� ������ ������ �Է��ϼ���: ");
		String str = sc.next();
		MyBox<String> b1 = new MyBox<String>(str);
		System.out.println("MyBox�� ����� ����: " + b1.get());
		
		System.out.print("MyBox�� ������ ������ �Է��ϼ���: ");
		str = sc.next();
		b1.set(str);
		System.out.println("MyBox�� ����� ����: " + b1.get());
		
		System.out.print("MyBox�� ������ ������ �Է��ϼ���: ");
		Integer num = sc.nextInt();
		MyBox<Integer> b2 = new MyBox<Integer>(num);
		
		System.out.print("MyBox�� ������ ������ �Է��ϼ���: ");
		num = sc.nextInt();
		MyBox<Integer> b3 = new MyBox<Integer>(num);
		
		System.out.println(b2.get() + " + " + b3.get() + " = " + (b2.get() + b3.get()));
		
		sc.close();
	}

}
