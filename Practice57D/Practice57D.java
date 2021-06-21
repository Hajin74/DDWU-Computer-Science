// 20200988 컴퓨터학과 유하진, 57D
import java.util.Scanner;

public class Practice57D {

	public static void main(String[] args) {
		try {
			int[] iArray = getInput();
			
			for(int i = 0; i < iArray.length; i++) {
				iArray[i] = i * 20;
			}
			
			for(int x: iArray) {
				System.out.print(x + "\t");
			}
		} catch (NumberFormatException e) {
			System.out.println("잘못된 형식의 숫자입니다.");
			
			return;
		} catch (NegativeArraySizeException e) {
			System.out.println("배열의 크기가 음수입니다.");
			
			return;
		}
	}
	
	public static int[] getInput() throws NumberFormatException { // throws
		Scanner s = new Scanner(System.in);
		
		System.out.print("배열의 크기를 입력하세요: ");
		String str = s.next();
		
		int num = Integer.parseInt(str);
		int[] rslt = makeArray(num);
		
		s.close();			
	
		return rslt;
	}
	
	public static int[] makeArray(int size) throws NegativeArraySizeException { // throws
		int[] rslt = new int[size];	
		
		return rslt;
	}

}
