// 20200988 ��ǻ���а� ������
import java.util.Scanner;

public class Practice33 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("�簢��1�� ���θ� �Է�: ");
		int width = input.nextInt();
		System.out.print("�簢��1�� ���θ� �Է�: ");
		int height = input.nextInt();
		Square s1 = Square.getInstance(width, height);
		
		System.out.print("�簢��2�� ���θ� �Է�: ");
		width = input.nextInt();
		System.out.print("�簢��2�� ���θ� �Է�: ");
		height = input.nextInt();
		Square s2 = Square.getInstance(width, height);
		
		if(s1.isSmallerThan(s2)) {
			System.out.println("�簢��1�� ���̰� �� �۽��ϴ�.");
		} else if(s2.isSmallerThan(s1)){
			System.out.println("�簢��2�� ���̰� �� �۽��ϴ�.");
		} else if(!s1.isSmallerThan(s2) && !s2.isSmallerThan(s1)){
			System.out.println("�� �簢���� ���̰� �����ϴ�.");
		}
		
		input.close();

	}

}
