// 20200988 ��ǻ���а� ������
import java.util.Scanner;

public class Practice32 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Square s1 = new Square();
		
		System.out.print("�簢��1�� ���θ� �Է�: ");
		int width = input.nextInt();
		s1.setWidth(width);
		System.out.print("�簢��1�� ���θ� �Է�: ");
		int height = input.nextInt();
		s1.setHeight(height);
		
		Square s2 = new Square();
		
		System.out.print("�簢��2�� ���θ� �Է�: ");
		width = input.nextInt();
		s2.setWidth(width);
		System.out.print("�簢��2�� ���θ� �Է�: ");
		height = input.nextInt();
		s2.setHeight(height);
		
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
