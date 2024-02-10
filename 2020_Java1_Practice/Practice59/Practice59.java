// 20200988 컴퓨터학과 유하진 #59
import java.util.Scanner;

public class Practice59 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("Animal 객체 animal을 생성합니다.");
		Animal a0 = new Animal();
		System.out.print("사진에 추가할 문장을 입력하세요: ");
		a0.picture = input.next();
		System.out.print("몸무게를 입력하세요: ");
		double w = input.nextDouble();
		a0.setWeight(w);
		a0.eat();
		System.out.println();
		
		System.out.println("\nLion 객체 buba을 생성합니다.");
		Lion l0 = new Lion();
		System.out.print("사진에 추가할 문장을 입력하세요: ");
		l0.picture = input.next();
		System.out.print("몸무게를 입력하세요: ");
		w = input.nextDouble();
		l0.setWeight(w);
		l0.roar2();
		System.out.println();
		
		System.out.println("\nEagle객체 paco를 생성합니다.");
		Eagle e0 = new Eagle();
		System.out.print("사진에 추가할 문장을 입력하세요: ");
		e0.picture = input.next();
		System.out.print("몸무게를 입력하세요: ");
		w = input.nextDouble();
		e0.setWeight(w);
		e0.fly2();
		
		System.out.println("\nAnimal 객체 animal의 정보입니다.");
		System.out.println(a0.toString());
		System.out.println("Lion 객체 buba의 정보입니다.");
		System.out.println(l0.toString());
		System.out.println("Eagle 객체 paco의 정보입니다.");
		System.out.println(e0.toString());
		
		input.close();
	}
}
