// 20200988 ��ǻ���а� ������, 57C
import java.util.Scanner;

public class Practice57C {

	public static void main(String[] args) {
		try {
			int[] iArray = getInput();
			
			for(int i = 0; i < iArray.length; i++) {
				iArray[i] = i * 20;
			}
			
			for(int x: iArray) {
				System.out.print(x + "\t");
			}
		} catch(NumberFormatException e) {
			System.out.println("�߸��� ������ �����Դϴ�.");
			
			return;
		}
	}
	
	public static int[] getInput() throws NumberFormatException { // throws
		Scanner s = new Scanner(System.in);
		
		System.out.print("�迭�� ũ�⸦ �Է��ϼ���: ");
		String str = s.next();
		
		int num = Integer.parseInt(str);
		int[] rslt = makeArray(num);
		
		s.close();			
	
		return rslt;
	}
	
	public static int[] makeArray(int size) { // try-catch
		try {
			int[] rslt = new int[size];	
			
			return rslt;
		} catch(NegativeArraySizeException e) {
			System.out.println("�迭�� ũ�Ⱑ �����Դϴ�.");
			return new int[0];
		} 
	}

}
