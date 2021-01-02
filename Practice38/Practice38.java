// ÄÄÇ»ÅÍÇĞ°ú 20200988 À¯ÇÏÁø
import java.util.Scanner;

public class Practice38 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		Person p1 = new Person();
		System.out.print("±èµ¿´ö ³ªÀÌ´Â?");
		p1.age = input.nextInt();
		p1.name = "±èµ¿´ö";
		p1.address = "¼­¿ï";
		
		Person p2 = new Person();
		System.out.print("È«±æµ¿ ³ªÀÌ´Â?");
		p2.age = input.nextInt();
		p2.name = "È«±æµ¿";
		p2.address = "°æºÏ";
		
		Person p3 = new Person();
		System.out.print("¼ºÃáÇâ ³ªÀÌ´Â?");
		p3.age = input.nextInt();
		p3.name = "¼ºÃáÇâ";
		p3.address = "Àü³²";
		
		System.out.println("°´Ã¼º° Á¤º¸ÀÔ´Ï´Ù.");
		System.out.println(p1.name + " : " + p1.age + "¼¼, " + p1.address);
		System.out.println(p2.name + " : " + p2.age + "¼¼, " + p2.address);
		System.out.println(p3.name + " : " + p3.age + "¼¼, " + p3.address);
		
		String midPerson;
		if((p1.age > p2.age && p1.age < p3.age) || (p1.age > p3.age && p1.age < p2.age)) {
			midPerson = p1.name;
		} else if ((p2.age > p1.age && p2.age < p3.age) || (p2.age > p3.age && p2.age < p1.age)) {
			midPerson = p2.name;
		} else {
			midPerson = p3.name;
		}
		
		System.out.println("³ªÀÌ°¡ Áß°£ÀÎ »ç¶÷Àº  " + midPerson + "ÀÔ´Ï´Ù.");
	}

}
