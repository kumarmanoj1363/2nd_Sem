package practicals_10_20;

import java.io.*;
import java.util.Scanner;

public class JQ_19 {

	public static void main(String[] args) {
		int a, b;
		a = 5;

		try {
			try {
				BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
				System.out.println("Enter an Integer: ");
				b = Integer.parseInt(br.readLine());

			try {
					int c = a / b;
					System.out.println("a / b is: " + c);
					System.out.println("Inside Innermost Try!");

					int[] arr = new int[5];
					// array out of bounds exception thrown. Handled by
					// outermost try
					arr[60] = 5;
				} catch (ArithmeticException e) {
					System.out.println("Divide by Zero Error!");
				}
			} catch (IOException e) {
				System.out.println("Input/Output Exception!");
			}
		} catch (Exception e) {
			System.out.println("Exception Found!");
		}
	}

}
