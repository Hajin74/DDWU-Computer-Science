/* 20200988 ��ǻ���а� ������
 * #70
 */
public class Practice70 {
	public static void main(String[] args) {
		System.out.println("box1�� �����Դϴ�.");
		MaterialBox box1 = new MaterialBox(2, 3, 4, "wood");
		box1.printInfo();
		
		System.out.println("\nbox2�� �����Դϴ�.");
		MaterialBox box2 = new MaterialBox(10, 5, 5, "paper");
		box2.printInfo();
	}
}
