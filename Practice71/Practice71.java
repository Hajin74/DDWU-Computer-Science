// 20200988 컴퓨터학과 유하진, 70
import java.util.ArrayList;

public class Practice71 {

	public static Double findMax(ArrayList<Double> scores) {
		Double max = scores.get(0);
		
		for(int i = 0; i < scores.size(); i++) {
			if(scores.get(i) > max) {
				max = scores.get(i);
			}
		}
		
		scores.remove(max);
		
		return max;
	}
	
	public static Double findMin(ArrayList<Double> scores) {
		Double min = scores.get(0);
		
		for(int i = 0; i < scores.size(); i++) {
			if(scores.get(i) < min) {
				min = scores.get(i);
			}
		}
		
		scores.remove(min);
		
		return min;
	}
	
	public static Double getAve(ArrayList<Double> scores) {
		double ave = 0;
		
		for(int i = 0; i < scores.size(); i++) {
			ave += scores.get(i);
		}
		ave /= scores.size();
		
		return ave;
	}
	
	public static void main(String[] args) {
		ArrayList<Double> a = new ArrayList<Double>();
		
		System.out.println("심사위원 채점결과");
		for(int i = 0; i < 10; i++) {
			double num = Math.random() * 11;
			
			if(num >= 10) {
				System.out.print(10.0 + "\t\t\t");
				a.add(10.0);
			} else {
				System.out.print(num + "\t");
				a.add(num);
			}
			
			if(i % 2 != 0) {
				System.out.println();
			}
		}
		System.out.println();
		
		System.out.println("평균값: " + getAve(a) + "\n");
		System.out.println("가장 높은 점수: " + findMax(a));
		System.out.println("가장 낮은 점수: " + findMin(a) + "\n");
		
		System.out.println("최고점과 최저점을 제외한 결과");
		for(int i = 0; i < a.size(); i++) {
			if(a.get(i) >= 10) {
				System.out.print(10.0 + "\t\t\t");
			} else {
				System.out.print(a.get(i) + "\t");
			}
			
			if(i % 2 != 0) {
				System.out.println();
			}
		}
		System.out.println();
		
		System.out.println("최종 점수: " + getAve(a));
	}

}
