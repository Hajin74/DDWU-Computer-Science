// 20200988 컴퓨터학과 유하진, 64
public class MyBox<T> {
	private T s;
	
	public MyBox (T s) {
		this.s = s;
	}
	
	void set (T s) {
		this.s = s;
	}
	
	T get() {
		return s;
	}
}
