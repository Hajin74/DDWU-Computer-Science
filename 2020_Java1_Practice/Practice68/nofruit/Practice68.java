// 20200988 컴퓨터학과 유하진
// 68
package nofruit;

import fruit.*;

public class Practice68 {
	public static void main(String[] args) {
		Food f0 = new Food();
		f0.setCalory(100);
		f0.setPrice(100);
		f0.setWeight(12.3);
		
		Melon f1 = new Melon();
		f1.setCalory(200);
		f1.setPrice(200);
		f1.setWeight(5.5);
		f1.setFarmInfo("좋은 이웃들");
		
		Potato f2 = new Potato();
		f2.setCalory(300);
		f2.setPrice(200);
		f2.setWeight(50.0);

		System.out.println("음식의 정보입니다.");
		System.out.println(f0.toString());
		
		System.out.println("\n멜론의 정보입니다.");
		System.out.println(f1.toString());
		
		System.out.println("\n감자의 정보입니다.");
		System.out.println(f2.toString());
		System.out.println("\n감자의 단위가격은 " + f2.getUnitPrice() + "입니다.");
	}
}
