// 20200988 ��ǻ���а� ������, 52

public class Practice52 {

	public static void main(String[] args) {
		Movable[] rArray = new Movable[2];
		
		rArray[0] = new Rectangle();
		rArray[1] = new Triangle();

		System.out.println(rArray[0] instanceof Rectangle); // true, rArray[0](movableŸ��)�� ����Ű�� ��ü�� rectangle��.
		System.out.println(rArray[0] instanceof Triangle); // !!false, rArray[0](movableŸ��)�� shapeŬ������ �θ�Ŭ�����̰�, triangle�� shape�� �ڽ�Ŭ�����̱� ������ ���� ��Ӱ����̱�� ������, rArray[0]���������� rectangle��ü�� ����Ŵ
		System.out.println(rArray[0] instanceof Movable); // true, rArray[0]�� ����Ű�� ��ü rec�� �θ�Ŭ������ movale�������̽��� ��ӹ޾ұ� ������ ����Ŵ
		System.out.println(rArray[0] instanceof Drawable); // true, rArray[0]�� ����Ű�� ��ü rec��  drawable�������̽��� ��ӹ޾ұ� ������ ����Ŵ
		
		System.out.println();
		
		System.out.println(rArray[1] instanceof Rectangle); // false, ���� ���� rarray[1]�� ����Ű�� ��ü�� triangle��. rectangle�� ���������� ��Ӱ����̱�� �ؼ� ������ ������ �Ͼ�� ����
		System.out.println(rArray[1] instanceof Triangle); // true, triangle Ŭ������ ��ü�� ��� ����
		System.out.println(rArray[1] instanceof Movable); // true, triangle Ŭ������ �θ�Ŭ������ movable �������̽��� ��������
		System.out.println(rArray[1] instanceof Drawable); // true, �ش� Ŭ���� drawble �������̽��� ��������

	}

}
