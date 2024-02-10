// 컴퓨터학과 20200988 유하진
//import java.util.Scanner;

public class Practice15 {

	public static void main(String[] args) {
		
		int j = 1;
		for(int i = 1; i <= 100; i += 3) {
			if(j % 5 == 0) {
				System.out.print(i + "\n");
			} else {
				System.out.print(i + "\t" );
			}
			j++;
		}
		
		System.out.println("\n");
		
		int i = 1;
		j = 1;
		while(i <= 100) {
			if(j % 5 == 0) {
				System.out.print(i + "\n");
			} else {
				System.out.print(i + "\t" );
			}
			i += 3;
			j++;
		}
		
	}

}
