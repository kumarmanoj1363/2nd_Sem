package practicals_10_20;

import java.io.IOException;
import java.util.Scanner;

class Distance_d {
	private int feet, inch, distance;

	Distance_d() {
		try {
			this.getdata();
		} catch (IOException e) {
			System.out.println("Error");
			System.exit(-1);
		}
	}

	Distance_d(Distance_d o) {
		this.feet = o.feet;
		this.inch = o.inch;
		this.distance = o.distance;
	}

	void getdata() throws IOException {
		System.out.print("Enter distance in Meters :");

		Scanner sc = new Scanner(System.in);
		this.distance = sc.nextInt();
	}

	public void calculate() {
		int temp = this.distance * (int) 39.3701;

		this.feet = temp / 12;
		this.inch = temp % 12;

		this.showData();
	}

	public void showData() {
		System.out.println(distance + " meters equals to " + feet + " feet " + inch + " inches.");
	}
}

public class JQ_10 {

	public static void main(String[] args) {

		Distance_d d1 = new Distance_d();
		d1.calculate();

		Distance_d d2 = d1;
		d2.showData();

		Distance_d d3 = new Distance_d(d1);
		d3.showData();
	}

}
