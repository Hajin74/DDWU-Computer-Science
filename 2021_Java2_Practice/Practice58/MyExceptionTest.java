// 20200988 ��ǻ���а� ������, 58

public class MyExceptionTest {
	public static void checkNegative(int number) throws MyException {
		if(number < 0) {
			throw(new MyException("������ �ȵ˴ϴ�."));
		}
		System.out.println("������ ������ �ƴϱ���");
	}
	
	public static void main(String[] args) {
		try {
			checkNegative(1);
			checkNegative(-1);
		} catch (MyException ex) {
			ex.printStackTrace();
		}

	}

}
