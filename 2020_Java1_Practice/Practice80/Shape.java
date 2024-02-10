/* 20200988 컴퓨터학과 유하진
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
		
		rst += "중심좌표 : (" + x + "," + y +")\n";
		
		return rst;
	}
}
