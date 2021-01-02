// 20200988 컴퓨터학과 유하진 #61

public class Practice61 {
	public static void main(String[] args) {
		MateriaBox box1 = new MateriaBox(2, 3, 4, "wood");
		System.out.println("box1의 정보입니다.");
		System.out.println("가로: " + box1.getX() + ", 세로 : " + box1.getY() + ", 높이: " + box1.getZ());
		System.out.println("재질: " + box1.getAttribute());
		System.out.println("부피: " + box1.getX() * box1.getY() * box1.getZ());
		System.out.println("무게: " + (box1.getX() * box1.getY() * box1.getZ() * 1.1));
		
		MateriaBox box2 = new MateriaBox(10, 5, 5, "paper");
		System.out.println("box2의 정보입니다.");
		System.out.println("가로: " + box2.getX() + ", 세로 : " + box2.getY() + ", 높이: " + box2.getZ());
		System.out.println("재질: " + box2.getAttribute());
		System.out.println("부피: " + box2.getX() * box2.getY() * box2.getZ());
		System.out.println("무게: " + (box2.getX() * box2.getY() * box2.getZ() * 1.1));
	}
}
