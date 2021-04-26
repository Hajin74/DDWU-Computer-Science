// 20200988 컴퓨터학과 유하진, 36
public class Pair {
	private Integer x;
	private Integer y;
	
	Pair(Integer x, Integer y) {
		this.x = x;
		this.y = y;
	}
	
	public void setX(Integer x) {
		this.x = x;
	}
	
	public Integer getX() {
		return x;
	}
	
	public void setY(Integer y) {
		this.y = y;
	}
	
	public Integer getY() {
		return y;
	}
	
	public String toString() {
		String result = "";
		
		result += "(" + getX() + ", ";
		result += getY() + ")";
		
		return result;
	}
	
	public static Pair add(Pair a, Pair b) {
		Pair rslt = new Pair(a.getX() + b.getX(), a.getY() + b.getY());
		
		return rslt;
	}
	
	public static Pair sub(Pair a, Pair b) {
		Pair rslt = new Pair(a.getX() - b.getX(), a.getY() - b.getY());
		
		return rslt;
	}
	
	public static Pair mult(Pair a, Pair b) {
		Pair rslt = new Pair(a.getX() * b.getX(), a.getY() * b.getY());
		
		return rslt;
	}
	
	public static Pair div(Pair a, Pair b) {
		Pair rslt = new Pair(a.getX() / b.getX(), a.getY() / b.getY());
		
		return rslt;
	}	
}
