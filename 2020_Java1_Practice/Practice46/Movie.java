// 20200988 ��ǻ���а� ������, 46
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
		result += "���� : " + getTitle();
		result += "\n���� : " + getScore() + "��\n";
		result += "���� : " + getDirector();
		result += "\n�����⵵ : " + getYear() + "��";
		return result;
	}
}
