// 20200988 ��ǻ���а� ������
// 66
public class Practice66 {
	public static void main(String[] args) {
		Food f0 = new Food();
		f0.calory = 100;
		f0.price = 100;
		f0.weight = 12.3;
		
		Melon f1 = new Melon();
		f1.calory = 200;
		f1.price = 200;
		f1.weight = 5.5;
		f1.farmInfo = "���� �̿���";
		
		Potato f2 = new Potato();
		f2.calory = 300;
		f2.price = 200;
		f2.weight = 50.0;

		System.out.println("������ �����Դϴ�.");
		System.out.println(f0.toString());
		
		System.out.println("\n����� �����Դϴ�.");
		System.out.println(f1.toString());
		
		System.out.println("\n������ �����Դϴ�.");
		System.out.println(f2.toString());
		System.out.println("\n������ ���������� " + f2.getUnitPrice() + "�Դϴ�.");
	}
}
