// 20200988 컴퓨터학과 유하진
public class Practice35 {

	public static void main(String[] args) {
		Date date1 = new Date();
		
		date1.setYear(2007);
		date1.setMonth(2);
		date1.setDay(18);
		
		System.out.println("오늘은 " + date1.toString() + "입니다.");

		Date date2 = new Date(2006);
		
		date2.setMonth(3);
		date2.setDay(2);
		
		System.out.println("내가 동덕여자대학교에 입학한 날짜는 " + date2.toString() + "입니다.");
	
		Date date3 = new Date(2007, 2);
		date3.setDay(27);
		
		Date date4 = new Date(2007, 3, 2);
		
		System.out.println("2007학년도 개강일은 " + date3.toString() + "에서 " 
		+ date4.toString() + "로 변경되었습니다.");
	
		date3.setMonth(4);
		date3.setDay(20);
		
		date4.setMonth(4);
		date4.setDay(26);
		
		System.out.println("중간고사 기간은 " + date3.toString() + "부터 " 
		+ date4.toString() + "까지 입니다.");
	}

}
