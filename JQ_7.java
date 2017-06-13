package practicals_1_10;

import java.util.Scanner;

public class JQ_7 {

	public static void main(String[] args) {
		int a = Integer.parseInt(args[0]);
		int sum = 0;

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter " + a + " Integers:");
		for (int i = 0; i < a; i++) {
			sum = sum + sc.nextInt();
		}

		System.out.println("Sum of entered number  is: " + sum);
	}

}
