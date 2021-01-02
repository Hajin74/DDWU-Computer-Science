// 컴퓨터학과 20200988 유하진
import java.util.Scanner;

public class Practice05 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int money, total, change, tax;
		
		System.out.print("받은 돈 : ");
		money = input.nextInt();
		
		System.out.print("상품의 총액 : ");
		total = input.nextInt();
		
		tax = (int)(total * 0.1);
		System.out.print("부가세 : " + tax + "\n");
		
		change = money - total;
		System.out.print("잔돈 : " + change);
		
		input.close();
	}

}
