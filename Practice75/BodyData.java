/* 20200988 ��ǻ���а� ������
 * #75
 */
public class BodyData {
	private int weight;
	private int height;
	
	// �����ڿ� ������ �߰�
	public void setWeight(int weight) {
		this.weight = weight;
	}
	
	public void setHeight(int height) {
		this.height = height;
	}
	
	public int getWeight() {
		return weight;
	}
	
	public int getHeight() {
		return height;
	}
	
	public int idealWeight() {
		return height - 110;
	} // height���� 110 ���� ���� ��ȯ
	
	public boolean isTallerThan(BodyData b) {
		if(b.height > height) {
			return true;
		} else {
			return false;
		}
	}
	// �� ��ü�� Ű�� �Ű����� b�� Ű���� ũ�� true, �ƴϸ� false ��ȯ
	public boolean needDiet() {
		if(weight > idealWeight()) {
			return true;
		} else {
			return false;
		}
	}
	// ������ weight�� �̻����� weight���� ũ�� true, �ƴϸ� false ��ȯ
}
