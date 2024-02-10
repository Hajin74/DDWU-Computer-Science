// 20200988 컴퓨터학과 유하진, 52
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
		title = "모름";
		director = "모름";
		year = -1;
		score = -1;
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
		
		result += "번호: " + getMid();
		result += "\n제목 : " + getTitle();
		result += "\n감독 : " + getDirector();
		result += "\n제작년도 : " + getYear() + "년";
		result += "\n평점 : " + getScore() + "점\n";
		
		return result;
	}
}
