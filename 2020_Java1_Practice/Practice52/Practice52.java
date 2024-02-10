// 20200988 컴퓨터학과 유하진, 52
import java.util.Scanner;

public class Practice52 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Movie m1 = new Movie();
		System.out.println("디폴트 영화의 정보입니다.");
		System.out.println(m1.toString());
		
		Movie m2 = new Movie();
		System.out.println("영화정보를 입력하세요.");
		System.out.print("영화제목은? ");
		m2.setTitle(input.next());
		System.out.print("감독은? ");
		m2.setDirector(input.next());
		System.out.print("제작년도는? ");
		m2.setYear(input.nextInt());
		System.out.print("평점은? ");
		m2.setScore(input.nextInt());
		
		System.out.println("\n입력한 영화의 정보입니다.");
		System.out.println(m2.toString());
		
		input.close();
	}
}
