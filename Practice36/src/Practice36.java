// 20200988 컴퓨터학과 유하진, 36
import java.util.Scanner;

public class Practice36 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		System.out.print("1번째 순서쌍 x좌표: ");
		int x = input.nextInt();
		System.out.print("1번째 순서쌍 y좌표: ");
		int y = input.nextInt();
		
		Pair p1 = new Pair(x, y); // 생성자, 매개변수 대입과정에서 오토박싱
		
		System.out.print("2번째 순서쌍 x좌표: ");
		x = input.nextInt();
		System.out.print("2번째 순서쌍 y좌표: ");
		y = input.nextInt();
		
		Pair p2 = new Pair(x, y); // 생성자, 매개변수 대입과정에서 오토박싱
		
		System.out.println("입력된 1번 순서쌍: " + p1.toString());
		System.out.println("입력된 2번 순서쌍: " + p2.toString());
		
		Pair rslt = Pair.add(p1, p2); // 정적 메소드호출해서 사칙연산을 하고 Pair 클래서 타입으로 반환값을 받음
		System.out.println("덧셈 결과: " + rslt.toString()); // 덧셈이 완료된 Pair 객체의 toString 호출하여 받음
		
		rslt = Pair.sub(p1, p2);
		System.out.println("뺄셈 결과: " + rslt.toString());
		
		rslt = Pair.mult(p1, p2);
		System.out.println("곱셈 결과: " + rslt.toString());
		
		rslt = Pair.div(p1, p2);
		System.out.println("나눗셈 결과: " + rslt.toString());
		
		input.close();
	}

}
