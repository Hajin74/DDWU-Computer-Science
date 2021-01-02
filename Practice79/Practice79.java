/* 20200988 컴퓨터학과 유하진
 * #79
 */
import java.util.Scanner;

public class Practice79 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		BodyData b1 = getBodyDataInstance(s);
		BodyData b2 = getBodyDataInstance(s);
		
		printHeightMsg(b1, b2);
		printDietMsg(b1);
		printDietMsg(b2);
		
		s.close();
	}
	
	public static BodyData getBodyDataInstance(Scanner s) {
		System.out.print("이름을 입력하세요: ");
		String name = s.next();
		System.out.print("키를 입력하세요: ");
		int height = s.nextInt();
		System.out.print("몸무게를 입력하세요: ");
		int weight = s.nextInt();
		System.out.println();
		
		BodyData obj = new BodyData();
		obj.setName(name);
		obj.setHeight(height);
		obj.setWeight(weight);
		
		return obj;
	}
	
	private static BodyData compareHeight(BodyData b1, BodyData b2) {
		if(b1.getHeight() > b2.getHeight()) {
			return b1;
		} else {
			return b2;
		}
	}
	
	public static void printHeightMsg(BodyData b1, BodyData b2) {
		if(compareHeight(b1, b2) == b1) {
			System.out.println("키는 " + b1.getName() + "이 더 큽니다.");
		} else {
			System.out.println("키는 " + b2.getName() + "이 더 큽니다.");
		}
	}

	public static void printDietMsg(BodyData b) {
		if(b.needDiet() == true) {
			System.out.println(b.getName() + "은 다이어트가 필요합니다.");
		} else {
			System.out.println(b.getName() + "은 다이어트가 필요하지 않습니다.");
		}
	}
}
