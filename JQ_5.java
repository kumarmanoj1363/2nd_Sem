package practicals_1_10;

import java.util.Scanner;

public class JQ_5 {

	public void convertBinary(int num) {
		int binary[] = new int[40];
		int index = 0;
		while (num > 0) {
			binary[index++] = num % 2;
			num = num / 2;
		}
		for (int i = index - 1; i >= 0; i--) {
			System.out.print(binary[i]);
		}
	}

	public static void main(String a[]) {
		JQ_5 obj = new JQ_5();
		System.out.print("Enter any decimal number:  ");
		Scanner sc=new Scanner(System.in);
		int i=sc.nextInt();
		System.out.print("Binary equivalent of "+i + " is =");
		obj.convertBinary(i);
		
	}
}
