// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice16 {

	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		System.out.print("������ �ϳ� �Է��ϼ���: ");
		int number = input.nextInt();
		
		int j = 1;
		for(int i = 0; i <= number; i += 3) {
			if(j % 5 == 0) {
				System.out.print(i + "\n");
			} else {
				System.out.print(i + "\t" );
			}
			j++;
		}
		
		input.close();
	}

}
