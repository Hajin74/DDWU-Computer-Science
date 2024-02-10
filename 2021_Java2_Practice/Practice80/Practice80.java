// 20200988 컴퓨터학과 유하진, 80
import java.util.Scanner;
import java.util.Random;
import java.util.ArrayList;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

public class Practice80 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Random rg = new Random();
		
		System.out.print("원하는 난수의 개수를 입력하세요: ");
		int num = sc.nextInt();
		System.out.print("난수 값의 범위를 설정하세요: ");
		int range = sc.nextInt();
		
		ArrayList<Integer> list = new ArrayList<Integer>();
		for(int i = 0; i < num; i++) {
			list.add(rg.nextInt(range + 1));
		}
		
		System.out.println("생성된 난수는 다음과 같습니다.");
		for(int i = 0; i < num; i++) {
			if(i % 10 == 0 && i > 0) {
				System.out.println();
			}
			System.out.print(list.get(i) + "\t");
		}
		System.out.println();
		
		try {
			System.out.print("난수 값을 저장할 파일 이름을 입력하세요: ");
			String name = sc.next();
			PrintWriter pw = new PrintWriter(new FileWriter(name));
			
			for(int i = 0; i < num; i++) {
				pw.println(list.get(i));
			}
			
			if(pw != null) {
				pw.close();
			}
			
			System.out.println("파일 " + name + "에 난수값이 저장되었습니다.");
		} catch (IOException e) {
			e.printStackTrace();
		}
		
		sc.close();
	}

}
