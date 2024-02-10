// 20200988 컴퓨터학과 유하진 #54
import java.util.Scanner;

public class Practice56 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("영화 정보를 입력하세요.");
		
		Movie m1 = new Movie();
		System.out.print("영화제목은? ");
		m1.setTitle(input.next());
		System.out.print("감독은? ");
		m1.setDirector(input.next());
		System.out.print("제작년도는? ");
		m1.setYear(input.nextInt());
		
		Movie m2 = new Movie();
		System.out.print("\n영화제목은? ");
		m2.setTitle(input.next());
		System.out.print("감독은? ");
		m2.setDirector(input.next());
		System.out.print("제작년도는? ");
		m2.setYear(input.nextInt());
		
		Movie m3 = new Movie();
		System.out.print("\n영화제목은? ");
		m3.setTitle(input.next());
		System.out.print("감독은? ");
		m3.setDirector(input.next());
		System.out.print("제작년도는? ");
		m3.setYear(input.nextInt());
		
		System.out.println("\n입력한 영화의 정보입니다.");
		
		String r1 = m1.toString();
		System.out.println(r1);
		String r2 = m2.toString();
		System.out.println(r2);
		String r3 = m3.toString();
		System.out.println(r3);
		
		String c1 = Movie.compareMovies(m1, m2);
		System.out.println(c1);
		String c2 = Movie.compareMovies(m1, m3);
		System.out.println(c2);
		String c3 = Movie.compareMovies(m2, m3);
		System.out.println(c3);
		
		
		input.close();
	}
}
