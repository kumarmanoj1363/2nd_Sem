package practicals_10_20;

class _JQ_12 {

	private int len, bre;

	_JQ_12() {
		len = bre = -1;
	}

	_JQ_12(int a, int b) {

		len = a;
		bre = b;
	}

	public int area() {
		return (len * bre);
	}

	public void getdata() {
		System.out.println("Length: " + this.len);
		System.out.println("Breadth: " + this.bre);
	}

	public void swap(int a, int b) {
		int temp = 0;
		temp = a;
		a = b;
		b = temp;
		System.out.println("After swap in Function");
		System.out.println("A: " + a);
		System.out.println("B: " + b);
	}

	public void swap(_JQ_12 o) {
		int temp = 0;
		temp = this.len;
		this.len = this.bre;
		this.bre = temp;

		System.out.println("In function:");
		System.out.println("Length: " + len);
		System.out.println("Breadth: " + bre);
	}
}

class JQ_12 {
	public static void main(String[] args) {
		_JQ_12 obj = new _JQ_12(10, 12);

		int ar = obj.area();
		System.out.println("Public Function called. Area is " + ar);

		int len = 8;
		int bre = 9;

		System.out.println("Before swap: ");
		System.out.println("Length: " + len);
		System.out.println("Breadth: " + bre);

		System.out.println("Passing in variables...");
		obj.swap(len, bre);

		System.out.println("No change in main. In main: ");
		System.out.println("Length: " + len);
		System.out.println("Breadth: " + bre);

		System.out.println("-----------------------------------------");

		System.out.println("Before swap: ");
		obj.getdata();

		System.out.println("Passing in object...");
		obj.swap(obj);

		System.out.println("In main: ");
		obj.getdata();
	}
}