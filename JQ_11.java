package practicals_10_20;

class _JQ_11 {

	public int sum(int a, int b) {
		return a + b;
	}

	public float sum(float a, float b) {
		return a + b;
	}

	public double sum(double a, double b) {
		return a + b;
	}
}

class JQ_11 {
	public static void main(String[] args) {
		_JQ_11 a = new _JQ_11();

		// demonstration on a char being promoted to int
		int s1 = a.sum('a', 'b');
		System.out.println(s1);

		// demonstration of float being promoted to int
		double s = a.sum(1.4f, 2);
		System.out.println(s);
	}
}
