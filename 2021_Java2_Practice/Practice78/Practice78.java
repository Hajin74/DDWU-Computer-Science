// 20200988 ��ǻ���а� ������, 78
public class Practice78 {

	public static void main(String[] args) {
		
		Movie m1 = new Movie();
		System.out.println("ù ��° ��ȭ�� �����Դϴ�.");
		System.out.println(m1.toString());

		Date d1 = new Date(2010, 7, 25);
		Movie m2 = new Movie("�μ���", "�", d1);
		System.out.println("�� ��° ��ȭ�� �����Դϴ�.");
		System.out.println(m2.toString());
		
		Date d2 = new Date(2015, 12, 24);
		Movie m3 = new Movie("���� ���߾�", "��ó�� ĿƼ��");
		m3.setViewDay(d2);
		System.out.println("�� ��° ��ȭ�� �����Դϴ�.");
		System.out.println(m3.toString());
	}

}
