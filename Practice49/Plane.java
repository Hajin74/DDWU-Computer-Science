// 20200988 ��ǻ���а� ������, 49
public class Plane {
	private int id, capacity;
	private String model;
	
	public void setId(int id) {
		this.id = id;
	}
	
	public void setCapacity(int capacity) {
		this.capacity = capacity;
	}
	
	public void setModel(String model) {
		this.model = model;
	}
	
	public Plane() {
		this.id = 0;
		this.model = "��";
		this.capacity = 0;
	}
	
	public Plane(int id, String model, int capacity) {
		setId(id);
		setCapacity(capacity);
		setModel(model);
	}
	
	public String toString() {
		String result = "";
		
		result += "�ĺ���ȣ: " + id + "��\n";
		result += "��: " + model;
		result += "\n�°��� : " + capacity + "��";
		
		return result;
	}
}
