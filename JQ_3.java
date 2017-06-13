package practicals_1_10;

import java.util.Scanner;

public class JQ_3 {

	public static void main(String[] manoj) {
		int[] arr = new int[30];
		System.out.print("Enter the number (max 20) :");

		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		System.out.println("Enter the elements :");
		for (int i = 0; i <= num; i++) {
			arr[i] = sc.nextInt();

		}
		for (int j = 0; j <= num; j++) {
			System.out.println("You entered :" + arr[j]);
		}

	}

}
