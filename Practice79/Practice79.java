// 20200988 컴퓨터학과 유하진 , 79
import java.util.Scanner;

public class Practice79 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("입력을 원하는 영화의 편수를 입력하세요:");
		int num = sc.nextInt();
		
		// 영화정보 입력받기
		Movie[] mArray = new Movie[num];
	
		for(int i = 0; i < num; i++) {
			System.out.println((i + 1) + "번 영화정보를 입력하세요.");
			
			System.out.print("영화 제목은? ");
			String title = sc.next();
			
			System.out.print("감독은? ");
			String director = sc.next();
			
			System.out.print("관람 년도는? ");
			int year = sc.nextInt();
			
			System.out.print("관람 월은? ");
			int month = sc.nextInt();
			
			System.out.print("관람 일은? ");
			int day = sc.nextInt();
			
			Date viewDay = new Date(year, month, day); // Date 객체 생성
			mArray[i] = new Movie(title, director, viewDay);
			
			System.out.println();
		}
		
		System.out.println("입력된 영화 정보입니다.");
		for(int i = 0; i < num; i++) {
			System.out.println(mArray[i].printOneLine());
		}
		System.out.println();
		
		Movie earliest = mArray[0];
		for(int i = 0; i < num; i++) {
			if (mArray[i].getViewDay().getYear() < earliest.getViewDay().getYear()) {
				earliest = mArray[i];
				continue;
			} else if (mArray[i].getViewDay().getYear() == earliest.getViewDay().getYear()) {
				if (mArray[i].getViewDay().getMonth() < earliest.getViewDay().getMonth()) {
					earliest = mArray[i];
					continue;
				} else if (mArray[i].getViewDay().getMonth() == earliest.getViewDay().getMonth()) {
					if (mArray[i].getViewDay().getDay() < earliest.getViewDay().getMonth()) {
						earliest = mArray[i];
						continue;
					} 
				} 
			} 
		}
		
		System.out.println("관람일이 가장 빠른 영화는 \"" + earliest.getTitle() + "\"입니다.");
		
		
		sc.close();
	}

}
