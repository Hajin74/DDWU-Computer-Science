// 20200988 ��ǻ���а� ������, 49
public class Practice49 {
	public static void main(String[] args) {
		Plane p0 = new Plane(); 
		System.out.println("����Ʈ ������� �����Դϴ�.");
		System.out.println(p0.toString());
		
		Plane p1 = new Plane();
		p1.setId(103615);
		p1.setCapacity(75);
		p1.setModel("���� 737");
		System.out.println("������ ������� �����Դϴ�.");
		System.out.println(p1.toString());
		
		Plane p2 = new Plane(2464737, "���� 747", 150); 
		System.out.println("������ ������� �����Դϴ�.");
		System.out.println(p2.toString());
	}
}
