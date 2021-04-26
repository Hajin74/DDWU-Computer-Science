// 20200988 컴퓨터학과 유하진, 54
public class Practice54 {

	public static void main(String[] args) {
		
		try {
			int n = Integer.parseInt("abc");
			System.out.println("try: " + n);
		} catch(NumberFormatException e) {
			System.out.println("숫자 형식 오류");
		} finally {
			System.out.println("finally");
		}
		
		System.out.println("continue running");

		// 숫자 형식 오류 finally continue running
	}

}
