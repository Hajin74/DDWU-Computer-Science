// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice36 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Movie mv1 = new Movie();
		System.out.println("영화정보를 입력하세요.");
		System.out.print("영화제목은? ");
		mv1.title = input.next();
		System.out.print("평점은? ");
		mv1.score = input.nextInt();
		System.out.print("감독은? ");
		mv1.director = input.next();
		System.out.print("개봉 년도는? ");
		mv1.year = input.nextInt();
		
		Movie mv2 = new Movie();
		System.out.println("영화정보를 입력하세요.");
		System.out.print("영화제목은? ");
		mv2.title = input.next();
		System.out.print("평점은? ");
		mv2.score = input.nextInt();
		System.out.print("감독은? ");
		mv2.director = input.next();
		System.out.print("개봉 년도는? ");
		mv2.year = input.nextInt();
		
		input.close();
	}

}
