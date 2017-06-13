package practicals_1_10;

import java.io.IOException;
import java.util.Scanner;

class Distance {
	private int feet, inch, distance;

	void getdata() throws IOException {
		System.out.print("Enter distance in Meters : ");

		Scanner sc = new Scanner(System.in);
		this.distance = sc.nextInt();
	}

	public void calculate() {
		int temp = this.distance * (int) 39.3701;

		this.feet = temp / 12;
		this.inch = temp % 12;

		System.out.println(distance + " meters equals to " + feet + " feet " + inch + " inches.");
	}
}

public class JQ_9 {

	public static void  main(String[] args) {

		Distance d = new Distance();
		try {
			d.getdata();
		} catch (IOException e) {
			System.out.println("Error");
		}

		d.calculate();
	}
}
