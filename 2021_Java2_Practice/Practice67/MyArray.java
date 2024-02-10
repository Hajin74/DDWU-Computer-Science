// 20200988 컴퓨터학과 유하진, 67

public class MyArray {
	public static <T> T pick(T[] arr, int index) {
		if(index < 0 || index >= arr.length) {
			System.out.print("인덱스가 범위를 벗어났습니다>>");
			return null;
		}
		
		return arr[index];
	}
	
	public static <T> T pickNew(T[] arr, int index) throws NoSuchIndexException {
		if(index < 0 || index >= arr.length) {
			throw (new NoSuchIndexException());
		}
		
		return arr[index];
	}
	
	public static <T> void displayArray(T[] arr) {
		int i;
		
		for(i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + "\t");
		}
		System.out.println();
	}
	
	public static <T> void swap(T[] arr, int i, int j) {
		T temp;
		
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
