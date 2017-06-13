package practicals_10_20;

import java.io.IOException;
import java.util.Scanner;

class _JQ_13 {

	
	private int sum;

	_JQ_13() {
		sum = 0;
	}

	// Definition of a function with variable length arguments
	public int sum(int... x) {
		for (int i : x) {
			sum = sum + i;
		}
		return sum;
	}

	// Static method definition
	public static void Max() {
		System.out.println("Max value of an Float is " + Float.MAX_VALUE);
	}
}

class JQ_13 {

	public static void main(String[] args) throws IOException {
		// Demonstrate call to a static function
		_JQ_13.Max();

		_JQ_13 Q = new _JQ_13();
		System.out.println("===============================================");

		System.out.println("Enter two numbers to add: ");

		Scanner sc = new Scanner(System.in);
		int i = sc.nextInt();
		int j = sc.nextInt();

		// function with variable length arguments called
		int sum = Q.sum(i, j);

		System.out.println("The sum is: " + sum);

	}

}
