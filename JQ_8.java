package practicals_1_10;

public class JQ_8 {

	public static void main(String[] args) {
		StringBuffer str = new StringBuffer("This is a college  ");
		System.out.println(str);
		System.out.println("Length of string: " + str.length());

		System.out.println("=====================================================");

		str.setLength(17);
		System.out.println("Length after executing setLength(): " + str.length());

		str.setCharAt(3, 'x');
		System.out.println("Modifiying using charAt: " + str);

		StringBuffer s1 = new StringBuffer(" It is located in New Delhi");
		str.append(s1);
		System.out.println("String after appending: " + str);

		StringBuffer s2 = new StringBuffer(" good");
		System.out.println("Using insert()");
		str.insert(23, s2);
		System.out.println(str);

		System.out.println("=============================================");
		System.out.println(" ");

		String S1 = new String("This is a Apple");
		String S2 = new String(" Welcome to college ");
		String S3 = new String(" ARDUINO IS A ELECTRONIC DEVICE");
		String S4 = new String(" ARDUINO IS A ELECTRONIC DEVICE");

		String S5 = S1.concat(S2);
		System.out.println(S5);

		System.out.println(S3.equals(S1));
		System.out.println(S3.equals(S4));

	}

}
