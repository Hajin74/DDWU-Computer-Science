// 20200988 컴퓨터학과 유하진, 46B

public class Practice46B {

	public static void main(String[] args) {
		Student[] list = new Student[3];
		
		list[0] = new Student();
		list[1] = new UndergraduateStudent();
		list[2] = new GraduateStudent();
		
		list[0].setId(1111);
		list[0].setTuition(100);
		list[0].setGpa(3.2);
		
		list[1].setId(2222);
		list[1].setTuition(100);
		list[1].setGpa(4.1);
		((UndergraduateStudent)(list[1])).setYear(3);
		
		list[2].setId(3333);
		list[2].setTuition(100);
		list[2].setGpa(3.4);
		((GraduateStudent)(list[2])).setLab("SE");
		
		printAll(list);
	}
	
	public static void printAll(Student[] s) {
		for(int i = 0; i < s.length; i++) {
			System.out.println(s[i].toString());
		}
	}

}
