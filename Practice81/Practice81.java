// 20200988 컴퓨터학과 유하진, 81
import java.util.Scanner;
import java.util.Collections;
import java.util.ArrayList;
import java.io.FileReader;
import java.io.FileNotFoundException;

public class Practice81 {

   public static void main(String[] args) {
      Scanner input = new Scanner(System.in);
      
      System.out.print("난수값이 저장된 파일 이름을 입력하세요: ");
      String name = input.next();
      
      // 파일에서 난수를 읽어들이고 출력하기
      System.out.println("파일에서 난수를 읽어 들입니다.");
      
      int count = 0;
      ArrayList<Integer> rArray = new ArrayList<Integer>();
      
      try {
         Scanner sc = new Scanner(new FileReader(name));
         
         while(sc.hasNextInt()) {
            int num = sc.nextInt();
            rArray.add(num);
            count++;
         }
         
         if(sc != null) {
            sc.close();
         }
      } catch (FileNotFoundException e) {
         e.printStackTrace();
      }
      
      System.out.println("난수의 개수는 모두 " + count + "개 입니다.");
      System.out.println("입력된 난수는 다음과 같습니다.");
      for(int i = 0; i < count; i++) {
         System.out.print(rArray.get(i) + "\t");
         
         if(i > 0 && i % 9 == 0) {
            System.out.println();
         }
      }
      System.out.println();
      
      // 정렬된 난수 출력하기
      System.out.println("정렬된 난수는 다음과 같습니다.");
      Collections.sort(rArray);
      for(int i = 0; i < count; i++) {
         System.out.print(rArray.get(i) + "\t");
         
         if(i > 0 && i % 9 == 0) {
            System.out.println();
         }
      }
      
      input.close();
   }

}