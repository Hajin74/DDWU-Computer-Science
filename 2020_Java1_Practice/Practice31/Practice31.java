// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice31 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Data dataObj = new Data();
		System.out.print("�¾ �⵵�� �Է��ϼ���: ");
		dataObj.year = input.nextInt();
		System.out.print("�¾ ���� �Է��ϼ���: ");
		dataObj.month = input.nextInt();
		System.out.print("�¾ ��¥�� �Է��ϼ���: ");
		dataObj.day = input.nextInt();
		System.out.println("����� ������ " + dataObj.year +"�� " + dataObj.month + "�� " + dataObj.day +"�� �Դϴ�.");
		input.close();
	}

}
