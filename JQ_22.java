package practicals_20_30;


 class JQ_22 

{
	int n;boolean valueset=false;
	synchronized int get()
	{
		while(!valueset)
		{
			try
			{
				wait();
			}catch(Exception e)
			{
				e.printStackTrace();
			}
		}
		System.out.println("Get "+n);
		valueset=false;
		notify();
		return n;
	}
	  synchronized void put(int n)
	  {
		  while(valueset)
		  {
			  try
			  {
				  wait();
				  
			  }catch(Exception e)
			  {
				  e.printStackTrace();
			  }
		  }
		  this.n=n;
		  valueset=true;
		  System.out.println("put "+n);
		  notify();
	  }
	  
}

class Producer implements Runnable
{
	JQ_22  q;
	  Producer(JQ_22  q)
	  {
		  this.q=q;
		  new Thread(this, "Producer ").start();
	  }
	  public void run()
	  {
		  int i=0;
		  while(true)
		  {
			  q.put(i++);
		  }
	  }
}
class consumer implements Runnable
{
	JQ_22  q;
	  consumer(JQ_22  q)
	  {
		  this.q=q;
		  new Thread(this, "consumer ").start();
	  }
	  public void run()
	  {
		  while(true)
		  {
			  q.get();
		  }
	  }
}

 class Pro_Con {
	public static void main(String[] args) {
		JQ_22  q=new JQ_22 ();
		 Producer p=new Producer(q);
		 new consumer(q);
		 System.out.println("Press ctrl+c to stop ");
	}

}
