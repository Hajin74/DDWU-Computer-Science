// ��ǻ���а� 20200988 ������
import java.util.Scanner;
public class Practice39 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Data birthday = new Data();
		System.out.print("�¾ �⵵�� �Է��ϼ���: ");
		birthday.year = input.nextInt();
		System.out.print("�¾ ���� �Է��ϼ���: ");
		birthday.month = input.nextInt();
		System.out.print("�¾ ��¥�� �Է��ϼ���: ");
		birthday.day = input.nextInt();
		
		Data adultday = new Data();
		adultday.year = birthday.year + 20;
		adultday.month = birthday.month;
		adultday.day = birthday.day;
		
		System.out.print("����� ������ ");
		birthday.print();
		System.out.print("����� �������� ");
		adultday.print();
		System.out.print("����� ������ ");
		birthday.print();
		
		input.close();
	}

}
