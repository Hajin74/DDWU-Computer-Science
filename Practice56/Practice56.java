// 20200988 ��ǻ���а� ������ #54
import java.util.Scanner;

public class Practice56 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("��ȭ ������ �Է��ϼ���.");
		
		Movie m1 = new Movie();
		System.out.print("��ȭ������? ");
		m1.setTitle(input.next());
		System.out.print("������? ");
		m1.setDirector(input.next());
		System.out.print("���۳⵵��? ");
		m1.setYear(input.nextInt());
		
		Movie m2 = new Movie();
		System.out.print("\n��ȭ������? ");
		m2.setTitle(input.next());
		System.out.print("������? ");
		m2.setDirector(input.next());
		System.out.print("���۳⵵��? ");
		m2.setYear(input.nextInt());
		
		Movie m3 = new Movie();
		System.out.print("\n��ȭ������? ");
		m3.setTitle(input.next());
		System.out.print("������? ");
		m3.setDirector(input.next());
		System.out.print("���۳⵵��? ");
		m3.setYear(input.nextInt());
		
		System.out.println("\n�Է��� ��ȭ�� �����Դϴ�.");
		
		String r1 = m1.toString();
		System.out.println(r1);
		String r2 = m2.toString();
		System.out.println(r2);
		String r3 = m3.toString();
		System.out.println(r3);
		
		String c1 = Movie.compareMovies(m1, m2);
		System.out.println(c1);
		String c2 = Movie.compareMovies(m1, m3);
		System.out.println(c2);
		String c3 = Movie.compareMovies(m2, m3);
		System.out.println(c3);
		
		
		input.close();
	}
}
