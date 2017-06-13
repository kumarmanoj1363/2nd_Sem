package practicals_10_20;

import java.util.Scanner;

public class JQ_18 {

	public static void main(String[] args) {
		do {

			try {
				System.out.println("Enter any two number :");
				Scanner sc = new Scanner(System.in);
				long a = sc.nextInt();
				long b = sc.nextInt();

				long c = a / b;
				System.out.println(c);
			} catch (ArithmeticException e) {
				System.out.println("Divide by zero Exception");
				e.printStackTrace();
			}
		} while (true);
	}
}