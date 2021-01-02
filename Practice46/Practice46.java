// 20200988 컴퓨터학과 유하진, 46, 답안업로드
import java.util.Scanner;

public class Practice46 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Movie mvObj = new Movie();
		System.out.println("영화정보를 입력하세요.");
		System.out.print("영화제목은? ");
		mvObj.setTitle(input.next());
		System.out.print("평점은? ");
		mvObj.setScore(input.nextInt());
		System.out.print("감독은? ");
		mvObj.setDirector(input.next());
		System.out.print("개봉년도는? ");
		mvObj.setYear(input.nextInt());
		
		System.out.println("\n입력한 영화의 정보입니다.\n" + mvObj.toString());
		
		input.close();
	}

}
