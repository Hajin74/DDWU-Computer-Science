// 20200988 컴퓨터학과 유하진, 82
import java.io.*;
import java.util.*;

public class Practice83 {
	
   public static void load(String fname, ArrayList<BankAccount> list) {
      try {
         Scanner scan = new Scanner(new FileReader(fname));

         while(scan.hasNext()) {
            int num = scan.nextInt();
            String owner = scan.next();
            int balance = scan.nextInt();

            list.add(new BankAccount(num, owner, balance));
         }

         if(scan != null) {
            scan.close();
         }
      } catch (FileNotFoundException e) {
         e.printStackTrace();
      }
   }
   
   public static void save(String fname, ArrayList<BankAccount> list) {
	   try {
		   PrintWriter pw = new PrintWriter(new FileWriter(fname));
		   
		   for(int i = 0; i < list.size(); i++) {
			   pw.println(list.get(i).getAccount() + "\t" + list.get(i).getOwner() + "\t" + list.get(i).getBalance());
		   }
		   
		   if(pw != null) {
			   pw.close();
		   }
	   } catch (IOException e) {
		   e.printStackTrace();
	   }
   }

   public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      ArrayList<BankAccount> BA = new ArrayList<BankAccount>();

      System.out.print("원하는 작업을 선택하세요 (0-종료/1-열기/2-저장/3-계좌업무): ");
      int n = sc.nextInt();

      while(n != 0) {
         if(n == 1) {
            System.out.print("파일 이름을 입력하세요: ");
            String fileName = sc.next();
            
            load(fileName, BA);
            
            System.out.println("\n현재 잔고현황입니다.\n계좌번호\t계좌주\t잔고");
            for(int i = 0; i < BA.size(); i++) {
               System.out.println(BA.get(i).getAccount() + "\t" + BA.get(i).getOwner() + "\t" + BA.get(i).getBalance());
            }
            System.out.println();
            
         } else if (n == 2) {
        	 System.out.print("파일 이름을 입력하세요: ");
             String NewfileName = sc.next();
             
             save(NewfileName, BA);
             
             System.out.println("잔고현황이 성공적으로 저장되었습니다.");
         } else if(n == 3) {
            System.out.print("업데이트할 계좌번호를 입력하세요: ");
            int account = sc.nextInt();
            System.out.print("원하는 계좌 작업을 선택하세요(1-입금/2-출금): ");
            int work = sc.nextInt();

            if(work == 1) {
               System.out.print("입금액을 입력하세요.");
               int money = sc.nextInt();
               BA.get(account - 1).deposit(money);
               System.out.println("입금이 완료되었습니다.");
            }
            else if (work == 2){
               System.out.print("출금액을 입력하세요:");
               int money = sc.nextInt();
               BA.get(account - 1).withdraw(money);
               System.out.println("출금이 완료되었습니다.");
            }
            
            System.out.println("\n현재 잔고현황입니다.\n계좌번호\t계좌주\t잔고");
            for(int i = 0; i < BA.size(); i++) {
               System.out.println(BA.get(i).getAccount() + "\t" + BA.get(i).getOwner() + "\t" + BA.get(i).getBalance());
            }
            System.out.println();
         }

         

         System.out.print("원하는 작업을 선택하세요 (0-종료/1-열기/2-저장/3-계좌업무): ");
         n = sc.nextInt();
      }

      System.out.println("프로그램을 종료합니다.");
      
      sc.close();
   }

}