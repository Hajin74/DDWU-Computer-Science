// 컴퓨터학과 20200988 유하진

public class Practice06 {

	public static void main(String[] args) {
		int i, j;
		
		for(i = 1; i <= 5; i++) {
			for(j = 2; j <= 5; j++) {
				System.out.print(j + " * " + i + " = " + i * j + "\t");
			}
			System.out.println();
		}
		
		System.out.println();
		for(i = 1; i <= 5; i++) {
			for(j = 6; j <= 9; j++) {
				System.out.print(j + " * " + i + " = " + i * j + "\t");
			}
			System.out.println();
		}

	}

}
