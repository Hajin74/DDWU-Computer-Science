/* 20200988 ��ǻ���а� ������
 * #77
 */
public class Practice77 {
	public static void main(String[] args) {
		Student p1 = new Student(20111234, "ȫ�浿", "��ǻ����");
		Student p2 = new Student(20121357, "������", "������");
		Student p3 = new Student(20121357, "������", "������");
		Student p4 = p1; // p4�� ��ü p1�� ����Ŵ
		
		System.out.println("��ü p1�� ����");
		System.out.println(p1.toString() + "\n");
		System.out.println("��ü p1�� ����");
		System.out.println(p2.toString() + "\n");
		System.out.println("��ü p1�� ����");
		System.out.println(p3.toString() + "\n");
		System.out.println("��ü p1�� ����");
		System.out.println(p4.toString() + "\n");
		
		Student.printInfo(p1, p2);
		Student.printInfo(p2, p2);
		Student.printInfo(p2, p3);
		Student.printInfo(p1, p4);
	}
}
