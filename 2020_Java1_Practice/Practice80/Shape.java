/* 20200988 ��ǻ���а� ������
 * #80
 */
public class Shape {
	private int x, y;
	
	public Shape(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public String toString( ) {
		String rst = "";
		
		rst += "�߽���ǥ : (" + x + "," + y +")\n";
		
		return rst;
	}
}
