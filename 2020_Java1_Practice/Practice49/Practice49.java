// 20200988 컴퓨터학과 유하진, 49
public class Practice49 {
	public static void main(String[] args) {
		Plane p0 = new Plane(); 
		System.out.println("디폴트 비행기의 정보입니다.");
		System.out.println(p0.toString());
		
		Plane p1 = new Plane();
		p1.setId(103615);
		p1.setCapacity(75);
		p1.setModel("보잉 737");
		System.out.println("제주행 비행기의 정보입니다.");
		System.out.println(p1.toString());
		
		Plane p2 = new Plane(2464737, "보잉 747", 150); 
		System.out.println("서울행 비행기의 정보입니다.");
		System.out.println(p2.toString());
	}
}
