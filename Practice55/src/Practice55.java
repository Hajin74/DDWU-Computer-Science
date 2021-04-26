// 20200988 컴퓨터학과 유하진, 55
import java.util.Scanner;

public class Practice55 {

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		try {
			System.out.print("정수를 입력하세요: ");
			String str = s.next();
			
			int num = Integer.parseInt(str);
			int[] array = new int[num];
			
			for(int i = 0; i < array.length; i++) {
				array[i] = i * 20;
			}
		} catch(NumberFormatException e) {
			System.out.println("숫자 형식 오류");
		} catch(NegativeArraySizeException e) {
			System.out.println("배열 크기 음수 오류");
			return;
		} catch(Exception e) {
			System.out.println("오류");
		} finally {
			System.out.println("반드시 처리할 일");
			s.close();
		}
		
		System.out.println("continue running");
		
	}
}

// 10, 반드시 처리할 일, continue running
// abc, 숫자 형식 오류, 반드시 처리할 일, continue running: num에 숫자가 올 수 없음
// -1, 배열 크기 음수 오류, 반드시 처리할 일 : return 이 있으면 finally가 끝난 후 아예 빠져나와 종료
// 0, 반드시 처리할 일, continue running
// 1.23, 숫자 형식 오류, 반드시 처리할 일, continue running
