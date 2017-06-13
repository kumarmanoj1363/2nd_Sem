package practicals_20_30;

import java.io.*;


public class JQ_20 {

	public static void main(String[] args) throws IOException {

		try {
			int i;
			System.out.print("Enter Age : ");

			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			i = Integer.parseInt(br.readLine());

			if (i < 0) 
				throw new intException();
				else
					System.out.print("You entered age ="+i);
			
		} catch (intException e) {
			System.out.println("Exception! Age cannot be negative");
			e.printStackTrace();
		}
	}
}

class intException extends Exception {

	//private static final long serialVersionUID = -324573551765039899L;

	public intException() {
	}

	public intException(String message) {
		super(message);
	}

}
