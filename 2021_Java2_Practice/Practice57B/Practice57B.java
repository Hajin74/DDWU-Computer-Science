// 20200988 ��ǻ���а� ������, 57B
import java.util.Scanner;

public class Practice57B {

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
		
		System.out.print("�迭�� ũ�⸦ �Է��ϼ���: ");
		String str = s.next();
		
		try {
			int num = Integer.parseInt(str);
			int[] rslt = makeArray(num);
			
			return rslt;
		} catch(NumberFormatException e) {
			System.out.println("�߸��� ������ �����Դϴ�.");
			
			return new int[0];
		} catch(NegativeArraySizeException e) {
			System.out.println("�迭�� ũ�Ⱑ �����Դϴ�.");
			
			return new int[0];
		} finally {
			s.close();			
		}
	}
	
	public static int[] makeArray(int size) throws NegativeArraySizeException { // throws
		int[] rslt = new int[size];	
		
		return rslt;
	}

}
