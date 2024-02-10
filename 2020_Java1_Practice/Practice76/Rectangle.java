/* 20200988 컴퓨터학과 유하진
 * #76
 */
public class Rectangle {
	private int width;
	private int height;
	
	public Rectangle(int width, int height) {
		this.width = width;
		this.height = height;
	}
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
	private int area() {
		return width * height;
	}

	public boolean isSmallerThan(Rectangle s) {
		if(area() < s.area() && area() != s.area()) {
			return true;
		} else {
			if(area() == s.area()) {
				System.out.println("두 사각형의 넓이는 같습니다.");
			} else {
				System.out.println("사각형2의 넓이가 더 작습니다.");
			}
			return false;
		}
	}
}
