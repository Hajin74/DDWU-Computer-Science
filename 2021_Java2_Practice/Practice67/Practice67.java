// 20200988 ��ǻ���а� ������, 67
import java.util.Scanner;

public class Practice67 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String[] sArray = {"�ϳ�", "�ο�", "����"};
		Integer[] iArray = {10, 20, 30, 40};
		
		System.out.println("���ڿ� �迭�� �����Դϴ�.");
		MyArray.<String>displayArray(sArray);
		
		for(int i = 0; i < 2; i++) {
			System.out.print("\n���ڿ� �迭���� ã�� ���� �ε����� �Է��ϼ���: ");
			int index = sc.nextInt();
			
			System.out.print(index + "�� �ε��� ���� ����: ");
			String element = MyArray.<String>pick(sArray, index);
			System.out.println(element);
		}
		
		System.out.print("\n0�� �ε����� ����� ���� ��ȯ�ϰ� ���� �ε����� �����ϼ���: ");
		int num = sc.nextInt();
		MyArray.<String>swap(sArray, 0, num);
		MyArray.<String>displayArray(sArray);
		
		System.out.println("\n������ �迭�� �����Դϴ�.");
		MyArray.<Integer>displayArray(iArray);
		
		for(int i = 0; i < 2; i++) {
			System.out.print("\n������ �迭���� ã�� ���� �ε����� �Է��ϼ���: ");
			int index = sc.nextInt();
			System.out.print(index + "�� �ε��� ���� ����: ");
			
			try {
				Integer element = MyArray.<Integer>pickNew(iArray, index);
				System.out.println(element);				
			} catch(NoSuchIndexException e) {
				System.out.println("�ε����� ������ ������ϴ�>> null");
			}
		}
		
		sc.close();
	}

}
