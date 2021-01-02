// 컴퓨터학과 20200988 유하진
public class Practice37 {

	public static void main(String[] args) {
		System.out.println("디폴트 비행기의 정보입니다.");
		System.out.println("식별번호: 0편");
		System.out.println("모델: 모름");
		System.out.println("승객 수: 0명");

		Plane plane1 = new Plane();
		plane1.model = "보잉 737";
		plane1.id = 1030615;
		plane1.capacity = 75;
		
		System.out.println("제주행 비행기의 정보입니다.");
		System.out.println("식별번호: " + plane1.id + "편");
		System.out.println("모델: " + plane1.model);
		System.out.println("승객 수: " + plane1.capacity + "명");
		
		Plane plane2 = new Plane();
		plane2.model = "보잉 747";
		plane2.id = 2464737;
		plane2.capacity = 150;
		
		System.out.println("서울행 비행기의 정보입니다.");
		System.out.println("식별번호: " + plane2.id + "편");
		System.out.println("모델: " + plane2.model);
		System.out.println("승객 수: " + plane2.capacity + "명");
	}

}
