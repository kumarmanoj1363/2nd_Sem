package practice;

public class Q1 {

	public static void main(String[] args) {
		int sum=0;
	System.out.println("Enter the number in command line ");
	for(int i=0;i<args.length;i++)
	{
		sum=sum+Integer.parseInt(args[i]);
	}
	System.out.println("Sum is ="+sum);
	
	}

}
