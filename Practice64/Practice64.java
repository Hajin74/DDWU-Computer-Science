// 20200988 컴퓨터학과 유하진, 64
import java.util.Scanner;

public class Practice64 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("MyBox에 저장할 내용을 입력하세요: ");
		String str = sc.next();
		MyBox<String> b1 = new MyBox<String>(str);
		System.out.println("MyBox에 저장된 내용: " + b1.get());
		
		System.out.print("MyBox에 저장할 내용을 입력하세요: ");
		str = sc.next();
		b1.set(str);
		System.out.println("MyBox에 저장된 내용: " + b1.get());
		
		System.out.print("MyBox에 저장할 내용을 입력하세요: ");
		Integer num = sc.nextInt();
		MyBox<Integer> b2 = new MyBox<Integer>(num);
		
		System.out.print("MyBox에 저장할 내용을 입력하세요: ");
		num = sc.nextInt();
		MyBox<Integer> b3 = new MyBox<Integer>(num);
		
		System.out.println(b2.get() + " + " + b3.get() + " = " + (b2.get() + b3.get()));
		
		sc.close();
	}

}
