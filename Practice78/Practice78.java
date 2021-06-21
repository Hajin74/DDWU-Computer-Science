// 20200988 컴퓨터학과 유하진, 78
public class Practice78 {

	public static void main(String[] args) {
		
		Movie m1 = new Movie();
		System.out.println("첫 번째 영화의 정보입니다.");
		System.out.println(m1.toString());

		Date d1 = new Date(2010, 7, 25);
		Movie m2 = new Movie("인셉션", "놀럼", d1);
		System.out.println("두 번째 영화의 정보입니다.");
		System.out.println(m2.toString());
		
		Date d2 = new Date(2015, 12, 24);
		Movie m3 = new Movie("러브 액추얼리", "리처드 커티스");
		m3.setViewDay(d2);
		System.out.println("세 번째 영화의 정보입니다.");
		System.out.println(m3.toString());
	}

}
