/* 20200988 ��ǻ���а� ������
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
				System.out.println("�� �簢���� ���̴� �����ϴ�.");
			} else {
				System.out.println("�簢��2�� ���̰� �� �۽��ϴ�.");
			}
			return false;
		}
	}
}
