// 20200988 ��ǻ���а� ������
public class Practice30 {

	public static void main(String[] args) {
		Student s1 = new Student();
		
		s1.setName("�赿��");
		s1.setAge(22);
		s1.setAddress("�����");
		s1.setSid(20132468);
		s1.setMajor("��ǻ����");
		
		Student s2 = new Student("ȫ�浿");
		
		s2.setAge(30);
		s2.setAddress("���ֽ�");
		s2.setSid(20111234);
		s2.setMajor("��ǻ����");
	
		
		Student s3 = new Student("������", 16, "������");
		
		s3.setSid(20121357);
		s3.setMajor("������");
	
		System.out.println(s1.toString());
		System.out.println(s2.toString());
		System.out.println(s3.toString());
		System.out.println(s1.printSafely());
		System.out.println(s2.printSafely());
		System.out.println(s3.printSafely());
	}

}
