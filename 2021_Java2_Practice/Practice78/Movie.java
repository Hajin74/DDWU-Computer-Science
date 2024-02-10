// 20200988 ��ǻ���а� ������, 78
public class Movie {
	private String title;
	private String director;
	private Date viewDay;
	
	public Movie() {
		this.title = "��";
		this.director = "��";
		viewDay = new Date(1999, 9, 9);
	}
	
	public Movie(String title, String director, Date viewDay) {
		this.title = title;
		this.director = director;
		this.viewDay = viewDay;
	}
	
	public Movie(String title, String director) {
		this.title = title;
		this.director = director;
		viewDay = new Date(1999, 9, 9);
	}
	
	public void setTitle(String title) {
		this.title = title;
	}
	
	public String getTitle() {
		return title;
	}
	
	public void setDirector(String director) {
		this.director = director;
	}
	
	public String getDirector() {
		return director;
	}
	
	public void setViewDay(Date viewDay) {
		this.viewDay = viewDay;
	}
	
	public Date getViewDay() {
		return viewDay;
	}
	
	public String toString() {
		String result = "";
		
		result += "����: " + getTitle() + "\n";
		result += "����: " + getDirector() + "\n";
		result += "������: " + viewDay.toString() + "\n";
		
		return result;
	}
}
