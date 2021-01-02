// 20200988 ��ǻ���а� ������ #54
import java.util.Random;
public class Movie {
	Random rg = new Random();
	
	private String title, director, mid;
	private int score, year;
	
	public void setTitle(String title) {
		this.title = title;
	}
	
	public void setDirector(String director) {
		this.director = director;
	}
	
	public void setScore(int score) {
		this.score = score;
	}
	
	public void setYear(int year) {
		this.year = year;
	}
	
	public void setMid(String mid) {
		this.mid = mid;
	}
	
	public String getTitle() {
		return title;
	}
	
	public String getDirector() {
		return director;
	}
	
	public int getScore() {
		return score;
	}
	
	public int getYear() {
		return year;
	}
	
	public String getMid() {
		return mid;
	}
	
	public Movie() {
		mid = makeID();
		title = "��";
		director = "��";
		year = -1;
		score = -1;
	}
	
	public static String compareMovies(Movie x, Movie y) {
		String m1 = x.mid;
		String m2 = y.mid;
		boolean director = compareDirector(x, y);
		boolean year = compareYear(x, y);
		
		String rslt = "";
		if(director) {
			if(year) {
				rslt += "��ȭ " + m1 + " �� ";
				rslt += "��ȭ " + m2 + " �� ";
				rslt += "������ ���� ���۳⵵�� �����ϴ�.";	
			} else {
				rslt += "��ȭ " + m1 + " �� ";
				rslt += "��ȭ " + m2 + " �� ";
				rslt += "������ ���� ���۳⵵�� �ٸ��ϴ�.";	
			}
		} else {
			if(year) {
				rslt += "��ȭ " + m1 + " �� ";
				rslt += "��ȭ " + m2 + " �� ";
				rslt += "������ �ٸ��� ���۳⵵�� �����ϴ�.";	
			} else {
				rslt += "��ȭ " + m1 + " �� ";
				rslt += "��ȭ " + m2 + " �� ";
				rslt += "������ �ٸ���  ���۳⵵�� �ٸ��ϴ�.";	
			}
		}
		return rslt;
	}
	
	private static boolean compareDirector(Movie x, Movie y) {
		if((x.director).equals(y.director) == true) { // 
			return true;
		} else {
			return false;
		}
	}
	
	private static boolean compareYear(Movie x, Movie y) {
		if(x.year == y.year) {
			return true;
		} else {
			return false;
		}
	}
	
	private String makeID() {
		String result = "";
		int r1 = rg.nextInt(9000) + 1000;
		int r2 = rg.nextInt(9000) + 1000;
		
		result += r1 + " - " + r2;
		
		return result;
	}
	
	public String toString() {
		String result = "";
		
		result += "��ȣ: " + getMid();
		result += "\n���� : " + getTitle();
		result += "\n���� : " + getDirector();
		result += "\n���۳⵵ : " + getYear() + "��\n";
		
		return result;
	}
}

