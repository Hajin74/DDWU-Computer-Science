// 20200988 ��ǻ���а� ������
public class Practice35 {

	public static void main(String[] args) {
		Date date1 = new Date();
		
		date1.setYear(2007);
		date1.setMonth(2);
		date1.setDay(18);
		
		System.out.println("������ " + date1.toString() + "�Դϴ�.");

		Date date2 = new Date(2006);
		
		date2.setMonth(3);
		date2.setDay(2);
		
		System.out.println("���� �������ڴ��б��� ������ ��¥�� " + date2.toString() + "�Դϴ�.");
	
		Date date3 = new Date(2007, 2);
		date3.setDay(27);
		
		Date date4 = new Date(2007, 3, 2);
		
		System.out.println("2007�г⵵ �������� " + date3.toString() + "���� " 
		+ date4.toString() + "�� ����Ǿ����ϴ�.");
	
		date3.setMonth(4);
		date3.setDay(20);
		
		date4.setMonth(4);
		date4.setDay(26);
		
		System.out.println("�߰���� �Ⱓ�� " + date3.toString() + "���� " 
		+ date4.toString() + "���� �Դϴ�.");
	}

}
