// 20200988 ��ǻ���а� ������, 54
public class Practice54 {

	public static void main(String[] args) {
		
		try {
			int n = Integer.parseInt("abc");
			System.out.println("try: " + n);
		} catch(NumberFormatException e) {
			System.out.println("���� ���� ����");
		} finally {
			System.out.println("finally");
		}
		
		System.out.println("continue running");

		// ���� ���� ���� finally continue running
	}

}
