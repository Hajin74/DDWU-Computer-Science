// 20200988 컴퓨터학과 유하진, 54
import java.util.Scanner;

public class Practice54 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("제주행 비행기의 정보를 입력하세요.");
		Plane p1 = new Plane();
		System.out.print("식별번호: ");
		p1.setId(input.nextInt());
		System.out.print("모델: ");
		p1.setModel(input.next());
		System.out.print("승객 수: ");
		p1.setCapacity(input.nextInt());
		
		System.out.println("제주행 비행기의 정보입니다.");
		String r1 = p1.toString();
		System.out.println(r1);
		System.out.println("현재까지 추가된 비행기는 모두 " + Plane.getPlanes() + "대 입니다.");
		
		System.out.println("\n서울행 비행기의 정보를 입력하세요.");
		System.out.print("식별번호 : ");
		int id2 = input.nextInt();
		System.out.print("모델 : ");
		String model2 = input.next();
		System.out.print("승객 수 : ");
		int capacity2 = input.nextInt();
		Plane p2 = new Plane(id2, model2, capacity2);
		
		
		System.out.println("서울행 비행기의 정보입니다.");
		String r2 = p2.toString();
		System.out.println(r2);
		System.out.println("현재까지 추가된 비행기는 모두 " + Plane.getPlanes() + "대 입니다.");
		
		input.close();
	}

}
