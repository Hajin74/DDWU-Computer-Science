// 20200988 ��ǻ���а� ������ #61

public class Practice61 {
	public static void main(String[] args) {
		MateriaBox box1 = new MateriaBox(2, 3, 4, "wood");
		System.out.println("box1�� �����Դϴ�.");
		System.out.println("����: " + box1.getX() + ", ���� : " + box1.getY() + ", ����: " + box1.getZ());
		System.out.println("����: " + box1.getAttribute());
		System.out.println("����: " + box1.getX() * box1.getY() * box1.getZ());
		System.out.println("����: " + (box1.getX() * box1.getY() * box1.getZ() * 1.1));
		
		MateriaBox box2 = new MateriaBox(10, 5, 5, "paper");
		System.out.println("box2�� �����Դϴ�.");
		System.out.println("����: " + box2.getX() + ", ���� : " + box2.getY() + ", ����: " + box2.getZ());
		System.out.println("����: " + box2.getAttribute());
		System.out.println("����: " + box2.getX() * box2.getY() * box2.getZ());
		System.out.println("����: " + (box2.getX() * box2.getY() * box2.getZ() * 1.1));
	}
}
