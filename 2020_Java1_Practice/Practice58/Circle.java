// 20200988 ��ǻ���а� ������ #58
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
		System.out.print("������ : " + radius + " :: ");
		System.out.print("���� : " + calcArea() + " :: ");
		System.out.print("�ѷ� : " + (float)(radius * 2 * 3.14) + "\n"); 
	}
}
