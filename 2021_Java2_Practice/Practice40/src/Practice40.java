// 20200988 ��ǻ���а� ������, 40
public class Practice40 {

	public static void main(String[] args) {
		Student s1 = new Student("ȫ�浿", 20111234, "��ǻ����");
		System.out.println("1�� �л��� ����");
		System.out.println(s1.printSafely());
		
		Student s2 = new Student("������", 20121357, "������");
		System.out.println("2�� �л��� ����");
		System.out.println(s2.printSafely());
		
		Student s3 = new Student("�̸���", 20101357, "��ǻ����");
		System.out.println("3�� �л��� ����");
		System.out.println(s3.printSafely());
		
		compareInfo(s1, s2);
		compareInfo(s1, s3);
	}
	
	public static void compareInfo(Student s1, Student s2) {
		if(s1.isSenior(s2) == -1) {
			if(s1.equalsMajor(s2)) {
				System.out.println("\"" + s1.getName() + "\" �л��� \"" + s2.getName() + "\" �л��� ������ ����, �й��� �����ϴ�." );
			} else {
				System.out.println("\"" + s1.getName() + "\" �л��� \"" + s2.getName() + "\" �л��� ������ �ٸ���, �й��� �����ϴ�." );
			}
		} else if(s1.isSenior(s2) == 0) {
			if(s1.equalsMajor(s2)) {
				System.out.println("\"" + s1.getName() + "\" �л��� \"" + s2.getName() + "\" �л��� ������ ����, �й��� �����ϴ�." );
			} else {
				System.out.println("\"" + s1.getName() + "\" �л��� \"" + s2.getName() + "\" �л��� ������ �ٸ���, �й��� �����ϴ�." );
			}
		} else {
			if(s1.equalsMajor(s2)) {
				System.out.println("\"" + s1.getName() + "\" �л��� \"" + s2.getName() + "\" �л��� ������ ����, �й��� �����ϴ�." );
			} else {
				System.out.println("\"" + s1.getName() + "\" �л��� \"" + s2.getName() + "\" �л��� ������ �ٸ���, �й��� �����ϴ�." );
			}
		}
	}

}
