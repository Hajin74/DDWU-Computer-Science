// 20200988 ��ǻ���а� ������, 70
import java.util.Scanner;

public class Practice70 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		// ������ RandomList
		RandomList<Integer> a1 = new RandomList<Integer>();
		
		System.out.println("������ RandomList�� �����մϴ�.");
		System.out.print("����Ʈ�� ũ�⸦ �Է��ϼ���: ");
		int size = sc.nextInt();
		
		for(int i = 0; i < size; i++) {
			System.out.print("�߰��ϰ� ���� ������ �Է��ϼ���: ");
			a1.add(sc.nextInt());
		}
		System.out.println();
		
		System.out.println("����Ʈ�� ������ ����մϴ�.");
		a1.print();
		System.out.println("������ ���� ���: " + a1.select() + "\n");
		
		// ���ڿ� RandomList
		RandomList<String> a2 = new RandomList<String>();
		
		System.out.println("���ڿ� RandomList�� �����մϴ�.");
		System.out.print("����Ʈ�� ũ�⸦ �Է��ϼ���: ");
		size = sc.nextInt();
		
		for(int i = 0; i < size; i++) {
			System.out.print("�߰��ϰ� ���� ������ �Է��ϼ���: ");
			a2.add(sc.next());
		}
		System.out.println();
		
		System.out.println("����Ʈ�� ������ ����մϴ�.");
		a2.print();
		System.out.println("������ ���� ���: " + a2.select() + "\n");
		
		sc.close();
	}

}
