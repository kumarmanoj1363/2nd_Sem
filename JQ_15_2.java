package practicals_10_20;
import java.io.*;
import java.util.Scanner;


public class JQ_15_2 {

	public static void main(String[] args) throws IOException {
		 try
	        {
	            FileInputStream fi = new FileInputStream("Q15");
	            Scanner in = new Scanner(fi);
	             
	            System.out.println("Data in file:");
	            while (in.hasNextLine())
	            {
	                String si = in.nextLine();
	                System.out.println(si);
	            }
	             
	            fi.close();
	            in.close();
	        }
	        catch (FileNotFoundException e)
	        {
	            System.out.println("File Not Found.");
	        }
	    }
	
	}


