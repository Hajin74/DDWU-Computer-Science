// ��ǻ���а� 20200988 ������
public class Practice37 {

	public static void main(String[] args) {
		System.out.println("����Ʈ ������� �����Դϴ�.");
		System.out.println("�ĺ���ȣ: 0��");
		System.out.println("��: ��");
		System.out.println("�°� ��: 0��");

		Plane plane1 = new Plane();
		plane1.model = "���� 737";
		plane1.id = 1030615;
		plane1.capacity = 75;
		
		System.out.println("������ ������� �����Դϴ�.");
		System.out.println("�ĺ���ȣ: " + plane1.id + "��");
		System.out.println("��: " + plane1.model);
		System.out.println("�°� ��: " + plane1.capacity + "��");
		
		Plane plane2 = new Plane();
		plane2.model = "���� 747";
		plane2.id = 2464737;
		plane2.capacity = 150;
		
		System.out.println("������ ������� �����Դϴ�.");
		System.out.println("�ĺ���ȣ: " + plane2.id + "��");
		System.out.println("��: " + plane2.model);
		System.out.println("�°� ��: " + plane2.capacity + "��");
	}

}
