// 20200988 ��ǻ���а� ������, 55
import java.util.Scanner;

public class Practice55 {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		try {
			System.out.print("������ �Է��ϼ���: ");
			String str = s.next();
			
			int num = Integer.parseInt(str);
			int[] array = new int[num];
			
			for(int i = 0; i < array.length; i++) {
				array[i] = i * 20;
			}
		} catch(NumberFormatException e) {
			System.out.println("���� ���� ����");
		} catch(NegativeArraySizeException e) {
			System.out.println("�迭 ũ�� ���� ����");
			return;
		} catch(Exception e) {
			System.out.println("����");
		} finally {
			System.out.println("�ݵ�� ó���� ��");
			s.close();
		}
		
		System.out.println("continue running");
		
	}
}

// 10, �ݵ�� ó���� ��, continue running
// abc, ���� ���� ����, �ݵ�� ó���� ��, continue running: num�� ���ڰ� �� �� ����
// -1, �迭 ũ�� ���� ����, �ݵ�� ó���� �� : return �� ������ finally�� ���� �� �ƿ� �������� ����
// 0, �ݵ�� ó���� ��, continue running
// 1.23, ���� ���� ����, �ݵ�� ó���� ��, continue running
