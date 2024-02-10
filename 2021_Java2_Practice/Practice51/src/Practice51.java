// 20200988 ��ǻ���а� ������, 51

public class Practice51 {

	public static void main(String[] args) {
		Shape s = new Shape();
		Rectangle r = new Rectangle();
		Triangle t = new Triangle();
		
		System.out.println(s instanceof Shape); // true, �������� s�� ����Ű�� ��ü�� Shape �� ��ü�̱� ����.
		System.out.println(s instanceof Rectangle); // false, ���� ��Ӱ����̱�� ������ ���� ���� s�� ����Ű�� ��ü�� Rectangle �ƴϴ�.
		System.out.println(s instanceof Triangle); // false, ���� ��Ӱ����̱�� ������ ���� ���� s�� ����Ű�� ��ü�� Triangle �ƴϴ�.
		System.out.println(s instanceof Movable); // true, �ڽ�Ŭ������ �θ�Ŭ������ �����ϰ� �ִ�, movable�� �������� s�� ����Ű�� ��ü Shape�� �����ϰ� �ֱ� ������ movale ����Ű�⵵ �Ѵ�.
		System.out.println(s instanceof Drawable); // false, s�� ����Ű�� ��ü Shape�� Drawable �������̽��� �������� �ʾҴ�. ��Ӱ��谡 �ƴѵ��� drawable�� �������̽��̱� ������ ������ ������ ���� �ʴ� ���ϱ�?
		System.out.println();
		
		
		
		System.out.println(r instanceof Shape); // true, r�� ����Ű�� rectangleŬ������ shapeŬ������ �����ϱ� ������
		System.out.println(r instanceof Rectangle); // true, r�� ����Ű�� ��ü�� rectangle �� ��ü
		//System.out.println(r instanceof Triangle); // compile error, r�� ����Ű�� ��ü�� triangle�� ��Ӱ��谡 �ƴ�.
		System.out.println(r instanceof Movable); // true, r�� ����Ű�� ��ü�� rectangle�� movable�� �����ϰ� ����.
		System.out.println(r instanceof Drawable); // true, r�� ����Ű�� ��ü�� rectangle�� drawble�� �����߱� ������ ��, r�� �ڽ� Ŭ�����̱� ������ .
		System.out.println();
		
		
		System.out.println(t instanceof Shape); // true, Shape Ŭ������ Triangle Ŭ������ �θ� Ŭ�����̴�.
		//System.out.println(t instanceof Rectangle); // compile error, ���� ��Ӱ��谡 �ƴϴ�.
		System.out.println(t instanceof Triangle); // true, �翬��
		System.out.println(t instanceof Movable); // true, �θ� Ŭ������ Shape Ŭ������ Movable �������̽��� ���� �߱� ������ �´�.
		System.out.println(t instanceof Drawable); // true, �ش� Ŭ������ Drawable �������̽��� �����߱� ������ �´�.

	}

}
