// 컴퓨터학과 20200988 유하진
//import java.util.Scanner;

public class Practice17 {

	public static void main(String[] args) {
		
		for(int i = 1; i <= 10; i++) {
			for(int j = 1; j <= 9; j++) {
				if(j == 1 && i != 10) {
					System.out.print(i * j + "  ");
				} else if(j == 1 && i == 10) {
					System.out.print(i * j + " ");
				} else if(j == 2) {
					System.out.print(i * j + "\t");
				} else if(j == 9) {
					System.out.println(i * j);
				} else {
					System.out.print(i * j + "\t");
				}
			}
		}

	}

}
