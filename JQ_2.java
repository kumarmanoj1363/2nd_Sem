package practicals_1_10;

import java.util.Scanner;

public class JQ_2 {

	public static void main(String[] manoj) {
		int num,fact=1;
		
		System.out.print("Enter number to find factorial :-");
		Scanner sc=new Scanner(System.in);
		 num=sc.nextInt();
          for(int i=1;i<=num;i++){
        	  fact=fact*i;
          }
          System.out.println("Factorial of "+ num + " is: "+fact);
	}

}
