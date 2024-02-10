// 20200988 ��ǻ���а� ������, 65
public class MyPair<T1, T2> {
	private T1 first;
	private T2 second;
	
	public MyPair(T1 first, T2 second) {
		this.first = first;
		this.second = second;
	}
	
	public void setFirst(T1 first) {
		this.first = first;
	}
	
	public T1 getFirst() {
		return first;
	}
	
	public void setSecond(T2 second) {
		this.second = second;
	}
	
	public T2 getSecond() {
		return second;
	}
	
	public String toString() {
		String result = "";
		
		result += "������� ������: ";
		result += "(" + getFirst() + ", ";
		result += getSecond() + ")";
		
		return result;
	}
}
