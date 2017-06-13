package practicals_1_10;

import java.util.Scanner;

public class JQ_6 {

	public static void main(String[] args) {

		int i, m = 0, flag = 0;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter any number :");
		int n = sc.nextInt();
		m = n / 2;
		for (i = 2; i <= m; i++) {
			if (n % i == 0) {
				System.out.println("Number is not prime");
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			System.out.println("Number is prime");
	}

}
