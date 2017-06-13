package practicals_20_30;

public class JQ_21 implements Runnable {

	 Thread t;

	public void run() {
		synchronized (t) {

			System.out.println("Starting implementation " + Thread.currentThread().getName());
			float s = 0;
			for (int i = 0; i <= 100000; i++) {
				for (int k = 0; k <= 100000; k++) {
					s += k;
					s*=k;
					try {
						t.wait();
					} catch (InterruptedException e) {
						
						e.printStackTrace();
					}
				}
			}
			System.out.println("Ending implementation of " + Thread.currentThread().getName());
		}
	}

	public JQ_21(String name, int pri) {
		
		t = new Thread(this);

		
		
		
			t.setName(name);
		t.setPriority(pri);
		
		
	}

	public void start() {
	
		t.start();
		
	}

	public static void main(String[] args) {
		System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~~Program starts~~~~~~~~~~~~~~~~~~~~~ ");
		JQ_21[] th = new JQ_21[8];
		synchronized (th) {

		for (int i = 0; i < th.length; i++) {
			th[i] = new JQ_21("T = " + i, i/2+1);
		   }
		}	
		for (JQ_21 tp : th)
			

			tp.start();
			th.notify();
		System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~Program ends~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ");

	}
}// class ends