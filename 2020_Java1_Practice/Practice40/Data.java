// 20200988 컴퓨터학과 유하진 , 40
public class Data {
	int year;
	int month;
	int day;
	
	public String toString() {
		String rslt = "";
		rslt += year + "년 ";
		rslt += month + "월 ";
		rslt += day + "입니다.";
		
		return rslt;
	}
}
