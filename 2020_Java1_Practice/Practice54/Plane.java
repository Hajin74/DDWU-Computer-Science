// 20200988 컴퓨터학과 유하진, 54

public class Plane {
	private int id, capacity;
	private String model;
	private static int planes = 0;
	
	public void setId(int id) {
		this.id = id;
	}
	
	public void setCapacity(int capacity) {
		this.capacity = capacity;
	}
	
	public void setModel(String model) {
		this.model = model;
	}
	
	public static int getPlanes() {
		return planes;
	}
	
	public Plane() {
		this.id = 0;
		this.model = "모름";
		this.capacity = 0;
		planes++;
	}
	
	public Plane(int id, String model, int capacity) {
		setId(id);
		setCapacity(capacity);
		setModel(model);
		planes++;
	}
	
	public String toString() {
		String result = "";
		
		result += "식별번호: " + id + "편\n";
		result += "모델: " + model;
		result += "\n승객수 : " + capacity + "명";
		
		return result;
	}
}
