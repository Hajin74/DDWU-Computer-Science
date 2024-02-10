/* 20200988 컴퓨터학과 유하진
 * #70
 */
public class Practice70 {
	public static void main(String[] args) {
		System.out.println("box1의 정보입니다.");
		MaterialBox box1 = new MaterialBox(2, 3, 4, "wood");
		box1.printInfo();
		
		System.out.println("\nbox2의 정보입니다.");
		MaterialBox box2 = new MaterialBox(10, 5, 5, "paper");
		box2.printInfo();
	}
}
