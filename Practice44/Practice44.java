// 20200988 컴퓨터학과 유하진, 44
import java.util.Scanner;

public class Practice44 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.print("원하는 기능을 선택하세요(1-정수, 2-실수): ");
		int flag = input.nextInt();
		
		if(flag == 1) {
			System.out.print("평균값을 원하는 정수의 개수를 입력하세요: ");
			int num = input.nextInt();
			if(num == 2) {
				int num1, num2;
				System.out.print("1번 정수를 입력하세요: ");
				num1 = input.nextInt();
				System.out.print("2번 정수를 입력하세요: ");
				num2 = input.nextInt();
				
				Average obj1 = new Average();
				int ave1 = obj1.getAverage(num1, num2);
				System.out.println("2개의 정수의 평균은 " + ave1 + "입니다.");
			}
			if(num == 3) {
				int num1, num2, num3;
				System.out.print("1번 정수를 입력하세요: ");
				num1 = input.nextInt();
				System.out.print("2번 정수를 입력하세요: ");
				num2 = input.nextInt();
				System.out.print("3번 정수를 입력하세요: ");
				num3 = input.nextInt();
				
				Average obj2 = new Average();
				int ave2 = obj2.getAverage(num1, num2, num3);
				System.out.println("3개의 정수의 평균은 " + ave2 + "입니다.");
			}
		} else {
			System.out.print("평균값을 원하는 실수의 개수를 입력하세요: ");
			double num = input.nextDouble();
			if(num == 2) {
				double num1, num2;
				System.out.print("1번 정수를 입력하세요: ");
				num1 = input.nextDouble();
				System.out.print("2번 정수를 입력하세요: ");
				num2 = input.nextDouble();
				
				Average obj3 = new Average();
				double ave3 = obj3.getAverage(num1, num2);
				System.out.println("2개의 정수의 평균은 " + ave3 + "입니다.");
			}
			if(num == 3) {
				double num1, num2, num3;
				System.out.print("1번 정수를 입력하세요: ");
				num1 = input.nextDouble();
				System.out.print("2번 정수를 입력하세요: ");
				num2 = input.nextDouble();
				System.out.print("3번 정수를 입력하세요: ");
				num3 = input.nextDouble();
				
				Average obj4 = new Average();
				double ave4 = obj4.getAverage(num1, num2, num3);
				System.out.println("3개의 정수의 평균은 " + ave4 + "입니다.");
			}
		}
		input.close();
	}

}
