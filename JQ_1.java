package practicals_1_10;

public class JQ_1 {

	public static void main(String[] manoj) {
		int sum = 0;
		System.out.println("Enter number in command line: ");
		for (int i = 0; i < manoj.length; i++) {
			sum += Integer.parseInt(manoj[i]);
		}
		System.out.println("Sum is =" + sum);

	}

}
