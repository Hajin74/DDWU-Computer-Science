// 20200988 ��ǻ���а� ������, 65
import java.util.Scanner;

public class Practice65 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.println("���ڿ��� �̷���� �������� ����ϴ�.");
		System.out.print("ù ��° ���Ҹ� �Է��ϼ���: ");
		String str1 = sc.next();
		System.out.print("�� ��° ���Ҹ� �Է��ϼ���: ");
		String str2 = sc.next();
		MyPair<String, String> p1 = new MyPair<String, String> (str1, str2);
		System.out.println(p1.toString());
		
		System.out.println("\n���ڷ� �̷���� �������� ����ϴ�.");
		System.out.print("ù ��° ���Ҹ� �Է��ϼ���: ");
		Integer num1 = sc.nextInt();
		System.out.print("�� ��° ���Ҹ� �Է��ϼ���: ");
		Integer num2 = sc.nextInt();
		MyPair<Integer, Integer> p2 = new MyPair<Integer, Integer> (num1, num2);
		System.out.println(p2.toString());
		
		sc.close();
	}

}
