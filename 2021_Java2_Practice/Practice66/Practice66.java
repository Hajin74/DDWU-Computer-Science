// 20200988 ��ǻ���а� ������, 66
public class Practice66 {

	public static void main(String[] args) {
		HealthData<Integer, Integer> h1 = new HealthData<Integer, Integer> ("�赿��", 50, 160);
		System.out.println("// 1��° ��ü");
		System.out.println(h1.toString());
		
		HealthData<Double, Integer> h2 = new HealthData<Double, Integer> ("ȫ�浿", 100.35, 180);
		System.out.println("// 2��° ��ü");
		System.out.println(h2.toString());
		
		HealthData<Integer, Double> h3 = new HealthData<Integer, Double> ("������", 65, 156.7);
		System.out.println("// 3��° ��ü");
		System.out.println(h3.toString());
		
		double totalWeight = h1.getWeight() + h2.getWeight() + h3.getWeight();
		System.out.println("\n3��� ü���� ��: " + totalWeight);
	}

}
