// ��ǻ���а� 20200988 ������
import java.util.Scanner;

public class Practice27 {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		int num[] = new int[5];
		for(int i = 0; i < num.length; i++) {
			System.out.print(i + 1 + "��° ���ڸ� �Է��ϼ��� : ");
			num[i] = input.nextInt();
		}
		
		System.out.println("\n�Էµ� ���ڴ� ������ �����ϴ�.");
		for(int i = 0; i < num.length; i++) {
			System.out.print(num[i] + " ");
		}
		
		System.out.println("\n���� ����Դϴ�.");
		for(int i = num.length - 1; i >= 0 ; i--) {
			System.out.print(num[i] + " ");
		}
		
		int max = -1;
		for(int i = 0; i < num.length; i++) {
			if(max < num[i]) {
				max = num[i];
			}
		}
		System.out.println("\n���� ū ���� " + max + "�Դϴ�.");
		
		int[] cnt = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
		for(int i = 0; i < num.length; i++) {
			int index = num[i];
			cnt[index]++;
		}
		
		System.out.println("\n���� ���� �Էµ� Ƚ���� ������ �����ϴ�.");
		for(int i = 0; i < cnt.length; i++) {
			System.out.println("����" + i + " : " + cnt[i] + "��");
		}
		System.out.println("\n���� ū ���� " + max + "�̰� �迭 ���� " + cnt[max] + "�� ��Ÿ���ϴ�.");
		
		input.close();
	}

}
