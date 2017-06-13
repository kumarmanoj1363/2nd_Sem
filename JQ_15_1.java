package practicals_10_20;

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.Scanner;

public class JQ_15_1 {

	public static void main(String[] args) throws IOException {
		FileOutputStream out = null;
		Scanner sc = new Scanner(System.in);

		try {
			out = new FileOutputStream("Q15");
			System.out.println("Enter the string: ");

			String input = sc.nextLine();
			byte[] bt = input.getBytes();

			out.write(bt, 0, input.length());

		} finally {
			sc.close();
			if (out != null) {
				out.close();
			}
		}
	}

}
