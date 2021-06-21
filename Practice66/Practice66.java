// 20200988 컴퓨터학과 유하진, 66
public class Practice66 {

	public static void main(String[] args) {
		HealthData<Integer, Integer> h1 = new HealthData<Integer, Integer> ("김동덕", 50, 160);
		System.out.println("// 1번째 객체");
		System.out.println(h1.toString());
		
		HealthData<Double, Integer> h2 = new HealthData<Double, Integer> ("홍길동", 100.35, 180);
		System.out.println("// 2번째 객체");
		System.out.println(h2.toString());
		
		HealthData<Integer, Double> h3 = new HealthData<Integer, Double> ("성춘향", 65, 156.7);
		System.out.println("// 3번째 객체");
		System.out.println(h3.toString());
		
		double totalWeight = h1.getWeight() + h2.getWeight() + h3.getWeight();
		System.out.println("\n3사람 체중의 합: " + totalWeight);
	}

}
