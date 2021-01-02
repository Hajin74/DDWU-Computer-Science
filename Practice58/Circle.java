// 20200988 컴퓨터학과 유하진 #58
public class Circle extends Shape {
	int radius;
	
	public Circle(int radius) {
		this.radius = radius;
		x = 0;
		y = 0;
	}
	
	double calcArea() {
		return 3.14 * radius * radius;
	}
	
	public void draw() {
		System.out.print("(" + x + "," + y + ") :: ");
		System.out.print("반지름 : " + radius + " :: ");
		System.out.print("면적 : " + calcArea() + " :: ");
		System.out.print("둘레 : " + (float)(radius * 2 * 3.14) + "\n"); 
	}
}
