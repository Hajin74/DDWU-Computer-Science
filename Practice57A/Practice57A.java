// 20200988 컴퓨터학과 유하진, 57A
import java.util.Scanner;

public class Practice57A {

	public static void main(String[] args) {
		int[] iArray = getInput();
		
		for(int i = 0; i < iArray.length; i++) {
			iArray[i] = i * 20;
		}
		
		for(int x: iArray) {
			System.out.print(x + "\t");
		}

	}
	
	public static int[] getInput() { // try-catch
		Scanner s = new Scanner(System.in);
		
		System.out.print("배열의 크기를 입력하세요: ");
		String str = s.next();
		
		try {
			int num = Integer.parseInt(str);
			int[] rslt = makeArray(num);
			
			return rslt;
		} catch(NumberFormatException e) {
			System.out.println("잘못된 형식의 숫자입니다.");
			
			return new int[0];
		} finally {
			s.close();			
		}
	}
	
	public static int[] makeArray(int size) { // try-catch
		try {
			int[] rslt = new int[size];	
			
			return rslt;
		} catch(NegativeArraySizeException e) {
			System.out.println("배열의 크기가 음수입니다.");
			return new int[0];
		} 
	}

}
