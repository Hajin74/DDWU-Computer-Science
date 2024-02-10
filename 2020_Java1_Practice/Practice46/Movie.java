// 20200988 컴퓨터학과 유하진, 46
public class Movie {
	private String title, director;
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
	
	public String toString() {
		String result = "";
		result += "제목 : " + getTitle();
		result += "\n평점 : " + getScore() + "점\n";
		result += "감독 : " + getDirector();
		result += "\n개봉년도 : " + getYear() + "년";
		return result;
	}
}
